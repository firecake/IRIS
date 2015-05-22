/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/IRIS/IRIS/vhdl/IRIS_TB.vhd";
extern char *WORK_P_0760723509;
extern char *STD_TEXTIO;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546418145_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
void work_p_0760723509_sub_2210978779_376968641(char *, char *, char *, unsigned int , unsigned int , char *, unsigned int , unsigned int , char *, unsigned int , unsigned int , char *);
void work_p_0760723509_sub_315433293_376968641(char *, char *, char *, unsigned int , unsigned int , char *, char *, unsigned int , unsigned int , char *, char *, unsigned int , unsigned int , char *, unsigned int , unsigned int );


static void work_a_4291056695_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    int t17;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6756);
    t4 = (t0 + 3896);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3932);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t9 = (500 * 1000000LL);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 6764);
    t4 = (t0 + 3896);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(127, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3052);
    t3 = (t0 + 1856U);
    t4 = (t0 + 1212U);
    t5 = (t0 + 752U);
    t6 = (t0 + 3932);
    work_p_0760723509_sub_2210978779_376968641(WORK_P_0760723509, t2, t3, 0U, 0U, t4, 0U, 0U, t5, 0U, 0U, t6);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4004);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6772);
    *((int *)t2) = 0;
    t3 = (t0 + 6776);
    *((int *)t3) = 4095;
    t10 = 0;
    t11 = 4095;

LAB12:    if (t10 <= t11)
        goto LAB13;

LAB15:    xsi_set_current_line(139, ng0);
    t9 = (2 * 1000000000LL);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, t9);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(133, ng0);
    t4 = (t0 + 3052);
    t5 = (t0 + 1948U);
    t6 = (t0 + 4040);
    t7 = (t0 + 2132U);
    t8 = (t0 + 4004);
    t12 = (t0 + 1212U);
    t13 = (t0 + 1304U);
    work_p_0760723509_sub_315433293_376968641(WORK_P_0760723509, t4, t5, 0U, 0U, t6, t7, 0U, 0U, t8, t12, 0U, 0U, t13, 0U, 0U);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3052);
    t3 = (t0 + 2040U);
    t4 = (t0 + 4076);
    t5 = (t0 + 2132U);
    t6 = (t0 + 4004);
    t7 = (t0 + 1212U);
    t8 = (t0 + 1304U);
    work_p_0760723509_sub_315433293_376968641(WORK_P_0760723509, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, t7, 0U, 0U, t8, 0U, 0U);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3052);
    t3 = (t0 + 2784U);
    t4 = (t0 + 1972U);
    t5 = *((char **)t4);
    t4 = (t0 + 6584U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t4);
    t15 = (t14 * 256);
    t6 = (t0 + 2064U);
    t7 = *((char **)t6);
    t6 = (t0 + 6600U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t6);
    t17 = (t15 + t16);
    std_textio_write5(STD_TEXTIO, t2, t3, t17, (unsigned char)0, 0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3052);
    t3 = ((STD_TEXTIO) + 856U);
    t4 = (t0 + 2784U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB14:    t2 = (t0 + 6772);
    t10 = *((int *)t2);
    t3 = (t0 + 6776);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB15;

LAB16:    t14 = (t10 + 1);
    t10 = t14;
    t4 = (t0 + 6772);
    *((int *)t4) = t10;
    goto LAB12;

LAB17:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6780);
    t4 = (t0 + 3896);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(142, ng0);
    t9 = (1 * 1000LL);
    t2 = (t0 + 3052);
    xsi_process_wait(t2, t9);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3052);
    t3 = (t0 + 1856U);
    t4 = (t0 + 1212U);
    t5 = (t0 + 752U);
    t6 = (t0 + 3932);
    work_p_0760723509_sub_2210978779_376968641(WORK_P_0760723509, t2, t3, 0U, 0U, t4, 0U, 0U, t5, 0U, 0U, t6);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4004);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6788);
    *((int *)t2) = 0;
    t3 = (t0 + 6792);
    *((int *)t3) = 4095;
    t10 = 0;
    t11 = 4095;

LAB25:    if (t10 <= t11)
        goto LAB26;

LAB28:    xsi_set_current_line(154, ng0);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 3052);
    t5 = (t0 + 1948U);
    t6 = (t0 + 4040);
    t7 = (t0 + 2132U);
    t8 = (t0 + 4004);
    t12 = (t0 + 1212U);
    t13 = (t0 + 1304U);
    work_p_0760723509_sub_315433293_376968641(WORK_P_0760723509, t4, t5, 0U, 0U, t6, t7, 0U, 0U, t8, t12, 0U, 0U, t13, 0U, 0U);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3052);
    t3 = (t0 + 2040U);
    t4 = (t0 + 4076);
    t5 = (t0 + 2132U);
    t6 = (t0 + 4004);
    t7 = (t0 + 1212U);
    t8 = (t0 + 1304U);
    work_p_0760723509_sub_315433293_376968641(WORK_P_0760723509, t2, t3, 0U, 0U, t4, t5, 0U, 0U, t6, t7, 0U, 0U, t8, 0U, 0U);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 3052);
    t3 = (t0 + 2784U);
    t4 = (t0 + 1972U);
    t5 = *((char **)t4);
    t4 = (t0 + 6584U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t4);
    t15 = (t14 * 256);
    t6 = (t0 + 2064U);
    t7 = *((char **)t6);
    t6 = (t0 + 6600U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t7, t6);
    t17 = (t15 + t16);
    std_textio_write5(STD_TEXTIO, t2, t3, t17, (unsigned char)0, 0);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3052);
    t3 = ((STD_TEXTIO) + 856U);
    t4 = (t0 + 2784U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);

LAB27:    t2 = (t0 + 6788);
    t10 = *((int *)t2);
    t3 = (t0 + 6792);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB28;

LAB29:    t14 = (t10 + 1);
    t10 = t14;
    t4 = (t0 + 6788);
    *((int *)t4) = t10;
    goto LAB25;

LAB30:    goto LAB2;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

}

static void work_a_4291056695_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2420U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3196);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2420U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3196);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4291056695_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t1 = (t0 + 4148);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (100 * 1000LL);
    t7 = (t0 + 4148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4291056695_2372691052_p_3(char *t0)
{
    char t22[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    int64 t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    char *t21;

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 4220);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(179, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t3 = t2;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 2556U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t2, 16U);
    xsi_set_current_line(181, ng0);

LAB4:
LAB5:    xsi_set_current_line(183, ng0);

LAB10:    t2 = (t0 + 3844);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:;
LAB7:    goto LAB2;

LAB8:    t5 = (t0 + 3844);
    *((int *)t5) = 0;
    xsi_set_current_line(184, ng0);
    t11 = (13 * 1000LL);
    t2 = (t0 + 3484);
    xsi_process_wait(t2, t11);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB9:    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t8 = *((unsigned char *)t4);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB12;

LAB13:    t7 = (unsigned char)0;

LAB14:    if (t7 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t3 = (t0 + 1488U);
    t10 = xsi_signal_has_event(t3);
    t7 = t10;
    goto LAB14;

LAB15:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(188, ng0);
    t11 = (322 * 1000LL);
    t2 = (t0 + 3484);
    xsi_process_wait(t2, t11);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(191, ng0);
    t11 = (5 * 1000LL);
    t2 = (t0 + 3484);
    xsi_process_wait(t2, t11);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 2556U);
    t3 = *((char **)t2);
    t12 = (15 - 15);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t7 = *((unsigned char *)t2);
    t4 = (t0 + 4220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t16 = (t6 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t7;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6796);
    *((int *)t2) = 14;
    t3 = (t0 + 6800);
    *((int *)t3) = 0;
    t12 = 14;
    t18 = 0;

LAB27:    if (t12 >= t18)
        goto LAB28;

LAB30:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 2556U);
    t3 = *((char **)t2);
    t2 = (t0 + 6616U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t22, t3, t2, 1);
    t5 = (t0 + 2556U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t16 = (t22 + 12U);
    t13 = *((unsigned int *)t16);
    t14 = (1U * t13);
    memcpy(t5, t4, t14);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 2556U);
    t3 = *((char **)t2);
    t2 = (t0 + 6616U);
    t4 = ((WORK_P_0760723509) + 672U);
    t5 = *((char **)t4);
    t12 = *((int *)t5);
    t18 = (t12 + 1);
    t7 = ieee_p_3620187407_sub_2546418145_3965413181(IEEE_P_3620187407, t3, t2, t18);
    if (t7 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB4;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB28:    xsi_set_current_line(198, ng0);

LAB33:    t4 = (t0 + 3852);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB29:    t2 = (t0 + 6796);
    t12 = *((int *)t2);
    t3 = (t0 + 6800);
    t18 = *((int *)t3);
    if (t12 == t18)
        goto LAB30;

LAB50:    t19 = (t12 + -1);
    t12 = t19;
    t4 = (t0 + 6796);
    *((int *)t4) = t12;
    goto LAB27;

LAB31:    t16 = (t0 + 3852);
    *((int *)t16) = 0;
    xsi_set_current_line(199, ng0);
    t11 = (1 * 1000LL);
    t2 = (t0 + 3484);
    xsi_process_wait(t2, t11);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB32:    t5 = (t0 + 1420U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB35;

LAB36:    t7 = (unsigned char)0;

LAB37:    if (t7 == 1)
        goto LAB31;
    else
        goto LAB33;

LAB34:    goto LAB32;

LAB35:    t5 = (t0 + 1396U);
    t10 = xsi_signal_has_event(t5);
    t7 = t10;
    goto LAB37;

LAB38:    xsi_set_current_line(200, ng0);
    t11 = (9.5000000000000000 * 1000LL);
    t2 = (t0 + 3484);
    xsi_process_wait(t2, t11);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB42:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2556U);
    t3 = *((char **)t2);
    t2 = (t0 + 6796);
    t19 = *((int *)t2);
    t20 = (t19 - 15);
    t13 = (t20 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t2));
    t14 = (1U * t13);
    t15 = (0 + t14);
    t4 = (t3 + t15);
    t7 = *((unsigned char *)t4);
    t5 = (t0 + 4220);
    t6 = (t5 + 32U);
    t16 = *((char **)t6);
    t17 = (t16 + 40U);
    t21 = *((char **)t17);
    *((unsigned char *)t21) = t7;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(203, ng0);
    t11 = (39.500000000000000 * 1000LL);
    t2 = (t0 + 3484);
    xsi_process_wait(t2, t11);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    goto LAB29;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB51:    xsi_set_current_line(209, ng0);
    t4 = xsi_get_transient_memory(16U);
    memset(t4, 0, 16U);
    t6 = t4;
    memset(t6, (unsigned char)2, 16U);
    t16 = (t0 + 2556U);
    t17 = *((char **)t16);
    t16 = (t17 + 0);
    memcpy(t16, t4, 16U);
    goto LAB52;

}


extern void work_a_4291056695_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4291056695_2372691052_p_0,(void *)work_a_4291056695_2372691052_p_1,(void *)work_a_4291056695_2372691052_p_2,(void *)work_a_4291056695_2372691052_p_3};
	xsi_register_didat("work_a_4291056695_2372691052", "isim/IRIS_TB_isim_beh.exe.sim/work/a_4291056695_2372691052.didat");
	xsi_register_executes(pe);
}
