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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/Desktop/calvin_megha_lab3/Lab3/clk_module.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {50000000, 0};
static int ng4[] = {2000000, 0};
static int ng5[] = {75000000, 0};
static int ng6[] = {100000000, 0};
static int ng7[] = {300000000, 0};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 29);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1608);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_40_1(char *t0)
{
    char t8[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 29, t7, 32);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 29);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t4, 29, t5, 32);
    memset(t8, 0, 8);
    t6 = (t10 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;

LAB9:    t9 = (t8 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t4, 29, t5, 32);
    memset(t8, 0, 8);
    t6 = (t10 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t6) == 0)
        goto LAB13;

LAB15:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;

LAB16:    t9 = (t8 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB19:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t4, 29, t5, 32);
    memset(t8, 0, 8);
    t6 = (t10 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t6) == 0)
        goto LAB20;

LAB22:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;

LAB23:    t9 = (t8 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB26:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t4, 29, t5, 32);
    memset(t8, 0, 8);
    t6 = (t10 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t6) == 0)
        goto LAB27;

LAB29:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;

LAB30:    t9 = (t8 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (~(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t8) = 1;

LAB37:    t21 = (t8 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB2;

LAB6:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1448);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB12;

LAB13:    *((unsigned int *)t8) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(52, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1768);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB19;

LAB20:    *((unsigned int *)t8) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(58, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB26;

LAB27:    *((unsigned int *)t8) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(64, ng0);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 1608);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    goto LAB33;

LAB36:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(69, ng0);
    t22 = ((char*)((ng1)));
    t30 = (t0 + 2088);
    xsi_vlogvar_assign_value(t30, t22, 0, 0, 29);
    goto LAB40;

}


extern void work_m_00000000000472171628_1918893874_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000000472171628_1918893874", "isim/test_timer_isim_beh.exe.sim/work/m_00000000000472171628_1918893874.didat");
	xsi_register_executes(pe);
}
