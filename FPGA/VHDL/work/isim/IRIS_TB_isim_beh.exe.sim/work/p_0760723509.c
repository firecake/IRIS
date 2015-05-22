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
extern char *IEEE_P_2592010699;



void work_p_0760723509_sub_2210978779_376968641(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, unsigned int t6, unsigned int t7, char *t8, unsigned int t9, unsigned int t10, char *t11)
{
    char t12[72];
    char t14[16];
    char t19[16];
    char t24[16];
    char t30[16];
    char t33[16];
    char t36[16];
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    int t48;
    int t49;
    int t50;
    int t51;

LAB0:    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 7;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (0 - 7);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t19 + 0U);
    t20 = (t16 + 0U);
    *((int *)t20) = 10;
    t20 = (t16 + 4U);
    *((int *)t20) = 0;
    t20 = (t16 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 10);
    t18 = (t21 * -1);
    t18 = (t18 + 1);
    t20 = (t16 + 12U);
    *((unsigned int *)t20) = t18;
    t20 = (t12 + 4U);
    t22 = ((IEEE_P_2592010699) + 2332);
    t23 = (t20 + 52U);
    *((char **)t23) = t22;
    t25 = (t20 + 36U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t19);
    t26 = (t20 + 40U);
    *((char **)t26) = t19;
    t27 = (t20 + 48U);
    *((unsigned int *)t27) = 11U;
    t28 = (t2 + 24U);
    t29 = *((char **)t28);
    t28 = (t29 + t4);
    t31 = ((IEEE_P_2592010699) + 2332);
    t29 = xsi_base_array_concat(t29, t30, t31, (char)99, (unsigned char)2, (char)97, t28, t14, (char)101);
    t34 = ((IEEE_P_2592010699) + 2332);
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t29, t30, (char)99, (unsigned char)2, (char)101);
    t37 = ((IEEE_P_2592010699) + 2332);
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t32, t33, (char)99, (unsigned char)3, (char)101);
    t38 = (t20 + 36U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    t40 = (t14 + 12U);
    t18 = *((unsigned int *)t40);
    t18 = (t18 * 1U);
    t41 = (1U + t18);
    t42 = (t41 + 1U);
    t43 = (t42 + 1U);
    memcpy(t38, t35, t43);
    t17 = 10;
    t21 = 0;

LAB2:    if (t17 >= t21)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    xsi_add_dynamic_wait(t1, t5, -1, -1);
    xsi_add_dynamic_wait(t1, t5, -1, -1);

LAB9:    t15 = (t1 + 128U);
    t15 = *((char **)t15);
    xsi_wp_set_status(t15, 1);
    t16 = (t1 + 48U);
    t22 = *((char **)t16);
    t23 = (t22 + 1440U);
    *((unsigned int *)t23) = 1U;
    t25 = (t1 + 48U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    getcontext(t27);
    t28 = (t1 + 48U);
    t29 = *((char **)t28);
    t31 = (t29 + 1440U);
    t18 = *((unsigned int *)t31);
    if (t18 == 1)
        goto LAB10;

LAB11:    t32 = (t1 + 48U);
    t34 = *((char **)t32);
    t35 = (t34 + 1440U);
    *((unsigned int *)t35) = 3U;

LAB7:
LAB8:    t37 = (t5 + 24U);
    t38 = *((char **)t37);
    t37 = (t38 + t7);
    t45 = *((unsigned char *)t37);
    t46 = (t45 == (unsigned char)2);
    if (t46 == 1)
        goto LAB12;

LAB13:    t44 = (unsigned char)0;

LAB14:    if (t44 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:    if (t17 == t21)
        goto LAB5;

LAB15:    t48 = (t17 + -1);
    t17 = t48;
    goto LAB2;

LAB6:    xsi_remove_dynamic_wait(t1, t5);
    xsi_remove_dynamic_wait(t1, t5);
    t15 = (t20 + 36U);
    t16 = *((char **)t15);
    t15 = (t19 + 0U);
    t48 = *((int *)t15);
    t22 = (t19 + 8U);
    t49 = *((int *)t22);
    t50 = (t17 - t48);
    t18 = (t50 * t49);
    t23 = (t19 + 4U);
    t51 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t48, t51, t49, t17);
    t41 = (1U * t18);
    t42 = (0 + t41);
    t25 = (t16 + t42);
    t44 = *((unsigned char *)t25);
    t43 = (0 + t9);
    t26 = (t11 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t44;
    xsi_driver_first_trans_delta(t11, t43, 1, 0LL);
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB12:    t47 = xsi_signal_has_event(t5);
    t44 = t47;
    goto LAB14;

}

void work_p_0760723509_sub_315433293_376968641(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, char *t6, unsigned int t7, unsigned int t8, char *t9, char *t10, unsigned int t11, unsigned int t12, char *t13, unsigned int t14, unsigned int t15)
{
    char t16[72];
    char t18[16];
    char t23[16];
    char t28[8];
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    int t47;
    int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;

LAB0:    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 7;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t23 + 0U);
    t24 = (t20 + 0U);
    *((int *)t24) = 7;
    t24 = (t20 + 4U);
    *((int *)t24) = 0;
    t24 = (t20 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - 7);
    t22 = (t25 * -1);
    t22 = (t22 + 1);
    t24 = (t20 + 12U);
    *((unsigned int *)t24) = t22;
    t24 = (t16 + 4U);
    t26 = ((IEEE_P_2592010699) + 2332);
    t27 = (t24 + 52U);
    *((char **)t27) = t26;
    t29 = (t24 + 36U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, t23);
    t30 = (t24 + 40U);
    *((char **)t30) = t23;
    t31 = (t24 + 48U);
    *((unsigned int *)t31) = 8U;
    t22 = (0 + t7);
    t32 = (t9 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = (unsigned char)2;
    xsi_driver_first_trans_delta(t9, t22, 1, 0LL);

LAB2:    t19 = (t13 + 24U);
    t20 = *((char **)t19);
    t19 = (t20 + t15);
    t36 = *((unsigned char *)t19);
    t37 = (t36 == (unsigned char)3);
    if (t37 != 0)
        goto LAB3;

LAB5:    t22 = (0 + t7);
    t19 = (t9 + 32U);
    t20 = *((char **)t19);
    t26 = (t20 + 40U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_delta(t9, t22, 1, 0LL);
    t21 = 7;
    t25 = 0;

LAB15:    if (t21 >= t25)
        goto LAB16;

LAB18:    t22 = (0 + t7);
    t19 = (t9 + 32U);
    t20 = *((char **)t19);
    t26 = (t20 + 40U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)2;
    xsi_driver_first_trans_delta(t9, t22, 1, 0LL);
    t19 = (t24 + 36U);
    t20 = *((char **)t19);
    t22 = (0 + t3);
    t19 = (t5 + 32U);
    t26 = *((char **)t19);
    t27 = (t26 + 40U);
    t29 = *((char **)t27);
    t30 = (t18 + 12U);
    t51 = *((unsigned int *)t30);
    t51 = (t51 * 1U);
    memcpy(t29, t20, t51);
    t31 = (t18 + 12U);
    t52 = *((unsigned int *)t31);
    t53 = (1U * t52);
    xsi_driver_first_trans_delta(t5, t22, t53, 0LL);
    xsi_add_dynamic_wait(t1, t10, -1, -1);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB32:    t19 = (t1 + 128U);
    t19 = *((char **)t19);
    xsi_wp_set_status(t19, 1);
    t20 = (t1 + 48U);
    t26 = *((char **)t20);
    t27 = (t26 + 1440U);
    *((unsigned int *)t27) = 1U;
    t29 = (t1 + 48U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    getcontext(t31);
    t32 = (t1 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 1440U);
    t22 = *((unsigned int *)t34);
    if (t22 == 1)
        goto LAB33;

LAB34:    t35 = (t1 + 48U);
    t38 = *((char **)t35);
    t39 = (t38 + 1440U);
    *((unsigned int *)t39) = 3U;

LAB30:
LAB31:    t40 = (t10 + 24U);
    t42 = *((char **)t40);
    t40 = (t42 + t12);
    t37 = *((unsigned char *)t40);
    t41 = (t37 == (unsigned char)3);
    if (t41 == 1)
        goto LAB35;

LAB36:    t36 = (unsigned char)0;

LAB37:    if (t36 == 1)
        goto LAB29;
    else
        goto LAB32;

LAB3:    xsi_add_dynamic_wait(t1, t10, -1, -1);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB9:    t20 = (t1 + 128U);
    t20 = *((char **)t20);
    xsi_wp_set_status(t20, 1);
    t26 = (t1 + 48U);
    t27 = *((char **)t26);
    t29 = (t27 + 1440U);
    *((unsigned int *)t29) = 1U;
    t30 = (t1 + 48U);
    t31 = *((char **)t30);
    t32 = (t31 + 0U);
    getcontext(t32);
    t33 = (t1 + 48U);
    t34 = *((char **)t33);
    t35 = (t34 + 1440U);
    t22 = *((unsigned int *)t35);
    if (t22 == 1)
        goto LAB10;

LAB11:    t38 = (t1 + 48U);
    t39 = *((char **)t38);
    t40 = (t39 + 1440U);
    *((unsigned int *)t40) = 3U;

LAB7:
LAB8:    t42 = (t10 + 24U);
    t43 = *((char **)t42);
    t42 = (t43 + t12);
    t44 = *((unsigned char *)t42);
    t45 = (t44 == (unsigned char)3);
    if (t45 == 1)
        goto LAB12;

LAB13:    t41 = (unsigned char)0;

LAB14:    if (t41 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:;
LAB6:    xsi_remove_dynamic_wait(t1, t10);
    xsi_remove_dynamic_wait(t1, t10);
    goto LAB2;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB12:    t46 = xsi_signal_has_event(t10);
    t41 = t46;
    goto LAB14;

LAB16:    xsi_add_dynamic_wait(t1, t10, -1, -1);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB22:    t19 = (t1 + 128U);
    t19 = *((char **)t19);
    xsi_wp_set_status(t19, 1);
    t20 = (t1 + 48U);
    t26 = *((char **)t20);
    t27 = (t26 + 1440U);
    *((unsigned int *)t27) = 1U;
    t29 = (t1 + 48U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    getcontext(t31);
    t32 = (t1 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 1440U);
    t22 = *((unsigned int *)t34);
    if (t22 == 1)
        goto LAB23;

LAB24:    t35 = (t1 + 48U);
    t38 = *((char **)t35);
    t39 = (t38 + 1440U);
    *((unsigned int *)t39) = 3U;

LAB20:
LAB21:    t40 = (t10 + 24U);
    t42 = *((char **)t40);
    t40 = (t42 + t12);
    t37 = *((unsigned char *)t40);
    t41 = (t37 == (unsigned char)3);
    if (t41 == 1)
        goto LAB25;

LAB26:    t36 = (unsigned char)0;

LAB27:    if (t36 == 1)
        goto LAB19;
    else
        goto LAB22;

LAB17:    if (t21 == t25)
        goto LAB18;

LAB28:    t47 = (t21 + -1);
    t21 = t47;
    goto LAB15;

LAB19:    xsi_remove_dynamic_wait(t1, t10);
    xsi_remove_dynamic_wait(t1, t10);
    t19 = (t13 + 24U);
    t20 = *((char **)t19);
    t19 = (t20 + t15);
    t36 = *((unsigned char *)t19);
    t20 = (t24 + 36U);
    t26 = *((char **)t20);
    t20 = (t23 + 0U);
    t47 = *((int *)t20);
    t27 = (t23 + 8U);
    t48 = *((int *)t27);
    t49 = (t21 - t47);
    t22 = (t49 * t48);
    t29 = (t23 + 4U);
    t50 = *((int *)t29);
    xsi_vhdl_check_range_of_index(t47, t50, t48, t21);
    t51 = (1U * t22);
    t52 = (0 + t51);
    t30 = (t26 + t52);
    *((unsigned char *)t30) = t36;
    goto LAB17;

LAB23:    xsi_saveStackAndSuspend(t1);
    goto LAB24;

LAB25:    t44 = xsi_signal_has_event(t10);
    t36 = t44;
    goto LAB27;

LAB29:    xsi_remove_dynamic_wait(t1, t10);
    xsi_remove_dynamic_wait(t1, t10);
    xsi_add_dynamic_wait(t1, t10, -1, -1);
    xsi_add_dynamic_wait(t1, t10, -1, -1);

LAB41:    t19 = (t1 + 128U);
    t19 = *((char **)t19);
    xsi_wp_set_status(t19, 1);
    t20 = (t1 + 48U);
    t26 = *((char **)t20);
    t27 = (t26 + 1440U);
    *((unsigned int *)t27) = 1U;
    t29 = (t1 + 48U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    getcontext(t31);
    t32 = (t1 + 48U);
    t33 = *((char **)t32);
    t34 = (t33 + 1440U);
    t22 = *((unsigned int *)t34);
    if (t22 == 1)
        goto LAB42;

LAB43:    t35 = (t1 + 48U);
    t38 = *((char **)t35);
    t39 = (t38 + 1440U);
    *((unsigned int *)t39) = 3U;

LAB39:
LAB40:    t40 = (t10 + 24U);
    t42 = *((char **)t40);
    t40 = (t42 + t12);
    t37 = *((unsigned char *)t40);
    t41 = (t37 == (unsigned char)3);
    if (t41 == 1)
        goto LAB44;

LAB45:    t36 = (unsigned char)0;

LAB46:    if (t36 == 1)
        goto LAB38;
    else
        goto LAB41;

LAB33:    xsi_saveStackAndSuspend(t1);
    goto LAB34;

LAB35:    t44 = xsi_signal_has_event(t10);
    t36 = t44;
    goto LAB37;

LAB38:    xsi_remove_dynamic_wait(t1, t10);
    xsi_remove_dynamic_wait(t1, t10);

LAB1:    return;
LAB42:    xsi_saveStackAndSuspend(t1);
    goto LAB43;

LAB44:    t44 = xsi_signal_has_event(t10);
    t36 = t44;
    goto LAB46;

}


extern void work_p_0760723509_init()
{
	static char *se[] = {(void *)work_p_0760723509_sub_2210978779_376968641,(void *)work_p_0760723509_sub_315433293_376968641};
	xsi_register_didat("work_p_0760723509", "isim/IRIS_TB_isim_beh.exe.sim/work/p_0760723509.didat");
	xsi_register_subprogram_executes(se);
}
