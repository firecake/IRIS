
#include "compiler.h"
#include "gpio.h"
#include "board.h"
#include "tc.h"
#include "scif_uc3c.h"
#include "sysclk.h"
#include "pevc.h"
#include "adcifa.h"
#include "pdca.h"
#include "delay.h"
#include "udc.h" 
#include "udi_cdc.h" 

static volatile bool main_b_cdc_enable = false;

// #define IRIS_DEBUG 1

#define SH_WIDTH   1		// us
#define ICG_WIDTH  3		// us
#define CCD_LENGTH 3694		// us
#define ACQ_LENGTH 3400

#define ADC_PDCA_CHANNEL_SEQ0 0

#define TC_SIZE       2
#define TM_SIZE   	  ( 2 + ACQ_LENGTH * 2 ) 

#define ICG_SH_CHANNEL		1

#define GCLK0_ID			9      // PBA Clock
#define TC          (&AVR32_TC0)     // Timer 0 address

volatile avr32_pevc_t			*ppevc  = &AVR32_PEVC;
volatile avr32_adcifa_t			*adcifa = &AVR32_ADCIFA; // ADCIFA IP registers address

// Local buffer for the elements of PDCA Channel of SEQ0
int16_t adc_values[ACQ_LENGTH];

char TC_Buff[TC_SIZE];
char TM_Buff[TM_SIZE];

// Boolean to trigger end of PDCA transfer
volatile bool flag_end_of_acquisition = false;

#ifdef IRIS_DEBUG
ISR(pevc_int_handler, AVR32_PEVC_IRQ_GROUP, 0);
#endif

ISR(pdca_int_handler_seq0, AVR32_PDCA_IRQ_GROUP0, 0);

static const pdca_channel_options_t pdca_channel0_config_t = {
	.addr = (void *)adc_values,                // Buffer address
	.pid = AVR32_ADCIFA_PDCA_ID_RX_CH0,             // Data from ADC SEQ0
	.size = ACQ_LENGTH,							        // Transfer counter
	.r_addr = NULL,                                 // No reload address
	.r_size = 0,                                    // No reload counter
	.transfer_size = PDCA_TRANSFER_SIZE_HALF_WORD   // 16-bit transfer
};
	
void my_callback_rx_notify(uint8_t port)
{
}

bool my_callback_cdc_enable(void)
{
	main_b_cdc_enable = true;
	return true;
}

void my_callback_cdc_disable(void)
{
	main_b_cdc_enable = false;
}

int main(void)
{
	
int16_t temp;
int len;
int Tint;

irqflags_t flags;

// ------------------------------------------------------------------------------------------------------------
//
// Timer counter 0
//
// ------------------------------------------------------------------------------------------------------------

  // The timer/counter instance and channel number are used in several functions.
  // It's defined as local variable for ease-of-use causes and readability.
  volatile avr32_tc_t *tc = TC;


  // Options for waveform generation.
  tc_waveform_opt_t waveform_opt1 =
  {
	  .channel  = ICG_SH_CHANNEL,               // Channel selection.

	  .bswtrg   = TC_EVT_EFFECT_CLEAR,           // Software trigger effect on TIOB.
	  .beevt    = TC_EVT_EFFECT_NOOP,           // External event effect on TIOB.
	  .bcpc     = TC_EVT_EFFECT_NOOP,          // RC compare effect on TIOB.
	  .bcpb     = TC_EVT_EFFECT_TOGGLE,            // RB compare effect on TIOB.

	  .aswtrg   = TC_EVT_EFFECT_SET,           // Software trigger effect on TIOA.
	  .aeevt    = TC_EVT_EFFECT_NOOP,           // External event effect on TIOA.
	  .acpc     = TC_EVT_EFFECT_NOOP,            // RC compare effect on TIOA: toggle.
	  .acpa     = TC_EVT_EFFECT_TOGGLE,          // RA compare effect on TIOA: toggle (other possibilities are none, set and clear).

	  .wavsel   = TC_WAVEFORM_SEL_UPDOWN_MODE_RC_TRIGGER,  // Waveform selection: Up mode without automatic trigger on RC compare.
	  .enetrg   = false,                        // External event trigger enable.
	  .eevt     = TC_EXT_EVENT_SEL_XC0_OUTPUT,  // External event selection.
	  .eevtedg  = TC_SEL_NO_EDGE,               // External event edge selection.
	  .cpcdis   = false,                        // Counter disable when RC compare.
	  .cpcstop  = false,                        // Counter clock stopped with RC compare.

	  .burst    = TC_BURST_NOT_GATED,           // Burst signal selection.
	  .clki     = TC_CLOCK_RISING_EDGE ,         // Clock inversion.
	  .tcclks   = TC_CLOCK_SOURCE_TC3           // Internal source clock 3, connected to PBC/8.
  };
   
// ------------------------------------------------------------------------------------------------------------
//
// Configure clocks
//
// ------------------------------------------------------------------------------------------------------------

 sysclk_init();
 irq_initialize_vectors();
 cpu_irq_enable();
 board_init();
 sysclk_enable_peripheral_clock(TC);

// ------------------------------------------------------------------------------------------------------------
//
// Setup generic clock 0
//
// ------------------------------------------------------------------------------------------------------------
	scif_gclk_opt_t gclk0_opt = {
	.clock_source = AVR32_SCIF_GC_USES_CLK_PBC,	// The input clock source to use for the generic clock
	.divider = 7,								// The division factor to apply to the clock src.
	.diven	= 1									// Enable/disable the generic clock divisor
	} ;

  scif_start_gclk (GCLK0_ID, &gclk0_opt); 
  
  gpio_enable_module_pin(AVR32_SCIF_GCLK_0_1_PIN, AVR32_SCIF_GCLK_0_1_FUNCTION);
  
// ------------------------------------------------------------------------------------------------------------
//
// Setup timer counter 0 ( PBC = 4MHz )
//
// ------------------------------------------------------------------------------------------------------------
  
  // Assign I/O to timer/counter channel pin & function.

  gpio_enable_module_pin(AVR32_TC0_A1_2_PIN, AVR32_TC0_A1_2_FUNCTION);    // ICG
  gpio_enable_module_pin(AVR32_TC0_B1_2_PIN, AVR32_TC0_B1_2_FUNCTION);    // SH
  	  
  // Initialize the timer/counter.
  
  tc_init_waveform(tc, &waveform_opt1);      
	 
  // Set the compare triggers.
  
  int readout_time = CCD_LENGTH * 2 + ICG_WIDTH ;
  
  // SH and ICG signals
  
  tc_write_ra(tc, ICG_SH_CHANNEL, SH_WIDTH );					// Set RA value.
  tc_write_rb(tc, ICG_SH_CHANNEL, ICG_WIDTH );					// Set RB value.
  tc_write_rc(tc, ICG_SH_CHANNEL, readout_time );				// Set RC value.
  
  tc_sync_start(tc); 
		
// ------------------------------------------------------------------------------------------------------------
//
// Event Generator setup
//
// ------------------------------------------------------------------------------------------------------------

#ifdef IRIS_DEBUG

	// register Register interrupts
	flags = cpu_irq_save();
	irq_register_handler(pevc_int_handler, AVR32_PEVC_TRIGGER_IRQ, 0);
	cpu_irq_restore(flags);
	
#endif
	
	// PEVC Event Shaper options.
	static const pevc_evs_opt_t PEVC_EVS_OPTIONS =
	{
		.igfdr = 0x0A,            // Set the IGF clock to be clk_slow*2pow11
		.igf = PEVC_EVS_IGF_OFF,  // Input Glitch Filter off
		.evf = PEVC_EVS_EVF_OFF,   // Enable Event on falling edge
		.evr = PEVC_EVS_EVR_ON   // Enable Event on rising edge
	}  ;
	
   pevc_channel_configure(ppevc,
                          AVR32_PEVC_ID_USER_ADCIFA_0,
                          AVR32_PEVC_ID_GEN_TC0_B1,
                          &PEVC_EVS_OPTIONS);

#ifdef IRIS_DEBUG
   pevc_channels_enable_trigger_interrupt(ppevc, 1<<AVR32_PEVC_ID_USER_ADCIFA_0);  
#endif
   
   pevc_channels_enable(ppevc, 1 << AVR32_PEVC_ID_USER_ADCIFA_0);
   
// ------------------------------------------------------------------------------------------------------------
//
// ADC setup 
//
// ------------------------------------------------------------------------------------------------------------  
	
adcifa_opt_t adc_config_t = {
	.frequency                = 1000000,  // ADC frequency (Hz)
	.reference_source         = ADCIFA_REF06VDD, // Reference Source
	.sample_and_hold_disable  = true,    // Disable Sample and Hold Time
	.single_sequencer_mode    = false,    // Single Sequencer Mode
	.free_running_mode_enable = true,     // Free Running Mode
	.sleep_mode_enable        = false     // Sleep Mode
};

// Sequencer Configuration
adcifa_sequencer_opt_t adcifa_sequence_opt = {
	.convnb               = 6,						 // Number of sequence
	.resolution           = ADCIFA_SRES_12B,         // Resolution selection
	.trigger_selection    = ADCIFA_TRGSEL_EVT,       // Trigger selection
	.start_of_conversion  = ADCIFA_SOCB_ALLSEQ,      // Conversion Management
	.sh_mode              = ADCIFA_SH_MODE_OVERSAMP, // Oversampling Management
	.half_word_adjustment = ADCIFA_HWLA_NOADJ,       // Half word Adjustment
	.software_acknowledge = ADCIFA_SA_NO_EOS_SOFTACK, // Software Acknowledge
};

adcifa_sequencer_conversion_opt_t
adcifa_sequence_conversion_opt[6] = {
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN0,			// Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,			// Negative Channel
		.gain      = ADCIFA_SHG_1						// Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN0,			// Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,			// Negative Channel
		.gain      = ADCIFA_SHG_1						// Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN0,			// Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,			// Negative Channel
		.gain      = ADCIFA_SHG_1						// Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN0,			// Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,			// Negative Channel
		.gain      = ADCIFA_SHG_1						// Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN0,			// Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,			// Negative Channel
		.gain      = ADCIFA_SHG_1						// Gain of the conversion
	},
	{
		.channel_p = AVR32_ADCIFA_INP_ADCIN0,			// Positive Channel
		.channel_n = AVR32_ADCIFA_INN_GNDANA,			// Negative Channel
		.gain      = ADCIFA_SHG_1						// Gain of the conversion
	}
};
	
// Assign and enable GPIO pins to th ADC function.
  gpio_enable_module_pin(AVR32_ADCIN0_PIN, AVR32_ADCIN0_FUNCTION);
  
// Get ADCIFA Factory Configuration
adcifa_get_calibration_data(adcifa, &adc_config_t);

// Configure ADCIFA core
adcifa_configure(adcifa, &adc_config_t, 16000000);

// Configure ADCIFA sequencer 0
adcifa_configure_sequencer(adcifa, 0, &adcifa_sequence_opt, adcifa_sequence_conversion_opt);


// ------------------------------------------------------------------------------------------------------------
//
// DMA setup
//
// ------------------------------------------------------------------------------------------------------------
	
	// Initialize PDCA channel with the pdca_options
	pdca_init_channel(ADC_PDCA_CHANNEL_SEQ0, &pdca_channel0_config_t);

	// register Register pdca_int_handler_seq0 interrupt on level 0
	flags = cpu_irq_save();
	irq_register_handler(pdca_int_handler_seq0, AVR32_PDCA_IRQ_0, 0);
	cpu_irq_restore(flags);

	// Enable the PDCA interrupt each time the transfer is complete,
	// i.e. each time a data buffer is ready
	pdca_enable_interrupt_transfer_complete(ADC_PDCA_CHANNEL_SEQ0);
	
	pdca_enable(ADC_PDCA_CHANNEL_SEQ0);
	  
// ------------------------------------------------------------------------------------------------------------
//
// USB setup
//
// ------------------------------------------------------------------------------------------------------------
	
	udc_start();
	
// ------------------------------------------------------------------------------------------------------------
//
// Main loop
//
// ------------------------------------------------------------------------------------------------------------
	  
  flag_end_of_acquisition = false;
  
  while (true)
  {		 
	  // Wait for TC
	  
	  if ( udi_cdc_is_rx_ready() )
	  {	
		  len = udi_cdc_read_buf(TC_Buff, TC_SIZE);
			  
		  if ( ( len == 0 ) && ( TC_Buff[0] == 0xAA ) )
		  {  
							
			  // Execute TC
		
		      for(int j=0;j<=TM_SIZE;j++)
			    TM_Buff[j] = 0;
								
			  Tint = TC_Buff[1];
			  
			  for(int i=0;i<1;i++)
			  {
				  while ( ! flag_end_of_acquisition );
				  
				  flag_end_of_acquisition = false;
				  
				  for(int j=0;j<ACQ_LENGTH;j++)
				  {
					  //temp = ( TM_Buff[j+1] << 8 ) | TM_Buff[j];
					  //temp = temp + adc_values[j];
					  temp = adc_values[j];
					  TM_Buff[2+2*j]   = ( temp & 0xFF00 ) >> 8;
					  TM_Buff[2+2*j+1] = ( temp & 0x00FF ) >> 0;
				  }
			  }
			  
			  // Send TM
			  
			  TM_Buff[0] = 0x16;
			  TM_Buff[1] = 0x64;
			  
			  while (!udi_cdc_is_tx_ready());
			  udi_cdc_write_buf(TM_Buff, TM_SIZE);
		}	 
	} 
  }
}

// ------------------------------------------------------------------------------------------------------------
//
// The PEVC interrupt handler
//
// ------------------------------------------------------------------------------------------------------------
#ifdef IRIS_DEBUG

ISR(pevc_int_handler, AVR32_PEVC_IRQ_GROUP, 0)
{
	gpio_tgl_gpio_pin(AVR32_PIN_PD14);
	pevc_channel_clear_trigger_interrupt(ppevc, AVR32_PEVC_ID_USER_ADCIFA_0);
}

#endif

// ------------------------------------------------------------------------------------------------------------
//
// The PDCA interrupt handler
// The handler disables the PDCA transfer.
// The interrupt will happen each time the transfer is completed.
//
// ------------------------------------------------------------------------------------------------------------
ISR(pdca_int_handler_seq0, AVR32_PDCA_IRQ_GROUP0, 0)
{
	gpio_tgl_gpio_pin(AVR32_PIN_PD11);

	ADCIFA_disable();	
	
	pdca_reload_channel(ADC_PDCA_CHANNEL_SEQ0, (void *)(adc_values), ACQ_LENGTH);
	ADCIFA_enable();
		
	flag_end_of_acquisition = true;
}