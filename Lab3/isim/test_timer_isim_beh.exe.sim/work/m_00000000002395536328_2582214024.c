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
static const char *ng0 = "C:/Users/152/Desktop/calvin_megha_lab3/Lab3/counter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static const char *ng6 = "works";
static int ng7[] = {59, 0};
static const char *ng8 = "";
static int ng9[] = {60, 0};



static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);

LAB2:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Cont_53_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 7000);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 6824);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_54_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7064);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6840);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_56_3(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6856);
    *((int *)t2) = 1;
    t3 = (t0 + 5544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = ((char*)((ng3)));
    xsi_vlogtype_concat(t13, 2, 2, 2U, t12, 1, t14, 1);
    t16 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 2, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(58, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

}

static void Cont_62_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 7128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 6872);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_63_5(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 6008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7192);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 6888);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_65_6(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6904);
    *((int *)t2) = 1;
    t3 = (t0 + 6288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = ((char*)((ng3)));
    xsi_vlogtype_concat(t13, 2, 2, 2U, t12, 1, t14, 1);
    t16 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 2, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(67, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

}

static void Always_71_7(char *t0)
{
    char t8[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t68[8];
    char t80[8];
    char t91[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    int t137;
    char *t138;
    char *t139;

LAB0:    t1 = (t0 + 6504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 6920);
    *((int *)t2) = 1;
    t3 = (t0 + 6536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);

LAB5:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 2, t7, 32);
    t9 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 2, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t2) == 0)
        goto LAB37;

LAB39:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;

LAB40:    memset(t33, 0, 8);
    t5 = (t8 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t8);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t5) != 0)
        goto LAB43;

LAB44:    t7 = (t33 + 4);
    t21 = *((unsigned int *)t33);
    t22 = *((unsigned int *)t7);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB45;

LAB46:    memcpy(t36, t33, 8);

LAB47:    memset(t68, 0, 8);
    t69 = (t36 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t36);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t69) != 0)
        goto LAB57;

LAB58:    t76 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB59;

LAB60:    memcpy(t99, t68, 8);

LAB61:    t131 = (t99 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t99);
    t135 = (t134 & t133);
    t136 = (t135 != 0);
    if (t136 > 0)
        goto LAB73;

LAB74:
LAB75:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t2) != 0)
        goto LAB95;

LAB96:    t5 = (t8 + 4);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB97;

LAB98:    memcpy(t34, t8, 8);

LAB99:    memset(t35, 0, 8);
    t40 = (t34 + 4);
    t63 = *((unsigned int *)t40);
    t64 = (~(t63));
    t65 = *((unsigned int *)t34);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t40) != 0)
        goto LAB109;

LAB110:    t42 = (t35 + 4);
    t70 = *((unsigned int *)t35);
    t71 = *((unsigned int *)t42);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB111;

LAB112:    memcpy(t80, t35, 8);

LAB113:    t103 = (t80 + 4);
    t126 = *((unsigned int *)t103);
    t127 = (~(t126));
    t128 = *((unsigned int *)t80);
    t129 = (t128 & t127);
    t130 = (t129 != 0);
    if (t130 > 0)
        goto LAB125;

LAB126:
LAB127:    goto LAB2;

LAB6:    xsi_set_current_line(75, ng0);

LAB9:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(80, ng0);

LAB13:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 3368);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t7) == 0)
        goto LAB14;

LAB16:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;

LAB17:    t20 = (t8 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t8);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(82, ng0);
    t26 = ((char*)((ng4)));
    t27 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 1, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(86, ng0);

LAB24:    xsi_set_current_line(87, ng0);
    t6 = (t0 + 3208);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    t20 = (t9 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (~(t15));
    t17 = *((unsigned int *)t9);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t20) == 0)
        goto LAB25;

LAB27:    t26 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t26) = 1;

LAB28:    t27 = (t8 + 4);
    t28 = (t9 + 4);
    t21 = *((unsigned int *)t9);
    t22 = (~(t21));
    *((unsigned int *)t8) = t22;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB30;

LAB29:    t30 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t30 & 1U);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t31 & 1U);
    t32 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t32, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t5) == 0)
        goto LAB31;

LAB33:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB34:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t8) = t16;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB36;

LAB35:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t20 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t20, t8, 0, 0, 1, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB30:    t23 = *((unsigned int *)t8);
    t24 = *((unsigned int *)t28);
    *((unsigned int *)t8) = (t23 | t24);
    t25 = *((unsigned int *)t27);
    t29 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t25 | t29);
    goto LAB29;

LAB31:    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB36:    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t17 | t18);
    t19 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t19 | t21);
    goto LAB35;

LAB37:    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t33) = 1;
    goto LAB44;

LAB43:    t6 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB44;

LAB45:    t9 = (t0 + 3528);
    t20 = (t9 + 56U);
    t26 = *((char **)t20);
    t27 = ((char*)((ng5)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_mod(t34, 32, t26, 2, t27, 32);
    memset(t35, 0, 8);
    t28 = (t34 + 4);
    t24 = *((unsigned int *)t28);
    t25 = (~(t24));
    t29 = *((unsigned int *)t34);
    t30 = (t29 & t25);
    t31 = (t30 & 4294967295U);
    if (t31 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t28) != 0)
        goto LAB50;

LAB51:    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t35);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t33 + 4);
    t41 = (t35 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t35) = 1;
    goto LAB51;

LAB50:    t32 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB51;

LAB52:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t33 + 4);
    t51 = (t35 + 4);
    t52 = *((unsigned int *)t33);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t35);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB54;

LAB55:    *((unsigned int *)t68) = 1;
    goto LAB58;

LAB57:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB58;

LAB59:    t81 = (t0 + 3208);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t80, 0, 8);
    t84 = (t83 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t84) == 0)
        goto LAB62;

LAB64:    t90 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t90) = 1;

LAB65:    memset(t91, 0, 8);
    t92 = (t80 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t80);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t92) != 0)
        goto LAB68;

LAB69:    t100 = *((unsigned int *)t68);
    t101 = *((unsigned int *)t91);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t103 = (t68 + 4);
    t104 = (t91 + 4);
    t105 = (t99 + 4);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB61;

LAB62:    *((unsigned int *)t80) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t91) = 1;
    goto LAB69;

LAB68:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB69;

LAB70:    t111 = *((unsigned int *)t99);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t99) = (t111 | t112);
    t113 = (t68 + 4);
    t114 = (t91 + 4);
    t115 = *((unsigned int *)t68);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (~(t117));
    t119 = *((unsigned int *)t91);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (~(t121));
    t123 = (t116 & t118);
    t124 = (t120 & t122);
    t125 = (~(t123));
    t126 = (~(t124));
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t128 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t128 & t126);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    t130 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t130 & t126);
    goto LAB72;

LAB73:    xsi_set_current_line(92, ng0);

LAB76:    xsi_set_current_line(93, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t21 = (~(t19));
    t22 = (t16 & t21);
    if (t22 != 0)
        goto LAB80;

LAB77:    if (t19 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t8) = 1;

LAB80:    t20 = (t8 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t29 = (t25 & t24);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(103, ng0);

LAB92:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 6, t5, 32);
    t6 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 6, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng8, 2, t0, (char)118, t4, 6);

LAB83:    goto LAB75;

LAB79:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(95, ng0);

LAB84:    xsi_set_current_line(96, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 6, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t21 = (~(t19));
    t22 = (t16 & t21);
    if (t22 != 0)
        goto LAB88;

LAB85:    if (t19 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t8) = 1;

LAB88:    t20 = (t8 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t29 = (t25 & t24);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t4, 6, t5, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 6, 0LL);

LAB91:    goto LAB83;

LAB87:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(98, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 6, 0LL);
    goto LAB91;

LAB93:    *((unsigned int *)t8) = 1;
    goto LAB96;

LAB95:    t4 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB96;

LAB97:    t6 = (t0 + 1208U);
    t7 = *((char **)t6);
    memset(t33, 0, 8);
    t6 = (t7 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t19);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t6) != 0)
        goto LAB102;

LAB103:    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t33);
    t29 = (t24 & t25);
    *((unsigned int *)t34) = t29;
    t20 = (t8 + 4);
    t26 = (t33 + 4);
    t27 = (t34 + 4);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t26);
    t37 = (t30 | t31);
    *((unsigned int *)t27) = t37;
    t38 = *((unsigned int *)t27);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB104;

LAB105:
LAB106:    goto LAB99;

LAB100:    *((unsigned int *)t33) = 1;
    goto LAB103;

LAB102:    t9 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    t43 = *((unsigned int *)t34);
    t44 = *((unsigned int *)t27);
    *((unsigned int *)t34) = (t43 | t44);
    t28 = (t8 + 4);
    t32 = (t33 + 4);
    t45 = *((unsigned int *)t8);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (~(t47));
    t49 = *((unsigned int *)t33);
    t52 = (~(t49));
    t53 = *((unsigned int *)t32);
    t54 = (~(t53));
    t60 = (t46 & t48);
    t61 = (t52 & t54);
    t55 = (~(t60));
    t56 = (~(t61));
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t55);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t56);
    t59 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t59 & t55);
    t62 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t62 & t56);
    goto LAB106;

LAB107:    *((unsigned int *)t35) = 1;
    goto LAB110;

LAB109:    t41 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB110;

LAB111:    t50 = (t0 + 3208);
    t51 = (t50 + 56U);
    t69 = *((char **)t51);
    memset(t36, 0, 8);
    t75 = (t69 + 4);
    t73 = *((unsigned int *)t75);
    t74 = (~(t73));
    t77 = *((unsigned int *)t69);
    t78 = (t77 & t74);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB117;

LAB115:    if (*((unsigned int *)t75) == 0)
        goto LAB114;

LAB116:    t76 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t76) = 1;

LAB117:    memset(t68, 0, 8);
    t81 = (t36 + 4);
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t36);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t81) != 0)
        goto LAB120;

LAB121:    t93 = *((unsigned int *)t35);
    t94 = *((unsigned int *)t68);
    t95 = (t93 & t94);
    *((unsigned int *)t80) = t95;
    t83 = (t35 + 4);
    t84 = (t68 + 4);
    t90 = (t80 + 4);
    t96 = *((unsigned int *)t83);
    t97 = *((unsigned int *)t84);
    t100 = (t96 | t97);
    *((unsigned int *)t90) = t100;
    t101 = *((unsigned int *)t90);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB113;

LAB114:    *((unsigned int *)t36) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t68) = 1;
    goto LAB121;

LAB120:    t82 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB121;

LAB122:    t106 = *((unsigned int *)t80);
    t107 = *((unsigned int *)t90);
    *((unsigned int *)t80) = (t106 | t107);
    t92 = (t35 + 4);
    t98 = (t68 + 4);
    t108 = *((unsigned int *)t35);
    t109 = (~(t108));
    t110 = *((unsigned int *)t92);
    t111 = (~(t110));
    t112 = *((unsigned int *)t68);
    t115 = (~(t112));
    t116 = *((unsigned int *)t98);
    t117 = (~(t116));
    t123 = (t109 & t111);
    t124 = (t115 & t117);
    t118 = (~(t123));
    t119 = (~(t124));
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t118);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t119);
    t122 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t122 & t118);
    t125 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t125 & t119);
    goto LAB124;

LAB125:    xsi_set_current_line(109, ng0);

LAB128:    xsi_set_current_line(110, ng0);
    t104 = (t0 + 1528U);
    t105 = *((char **)t104);

LAB129:    t104 = ((char*)((ng1)));
    t137 = xsi_vlog_unsigned_case_compare(t105, 1, t104, 32);
    if (t137 == 1)
        goto LAB130;

LAB131:    t2 = ((char*)((ng4)));
    t60 = xsi_vlog_unsigned_case_compare(t105, 1, t2, 32);
    if (t60 == 1)
        goto LAB132;

LAB133:
LAB134:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t21 = (~(t19));
    t22 = (t16 & t21);
    if (t22 != 0)
        goto LAB138;

LAB135:    if (t19 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t8) = 1;

LAB138:    t20 = (t8 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t29 = (t25 & t24);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB139;

LAB140:
LAB141:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t21 = (~(t19));
    t22 = (t16 & t21);
    if (t22 != 0)
        goto LAB145;

LAB142:    if (t19 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t8) = 1;

LAB145:    t20 = (t8 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t29 = (t25 & t24);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB146;

LAB147:
LAB148:    goto LAB127;

LAB130:    xsi_set_current_line(111, ng0);
    t113 = (t0 + 2888);
    t114 = (t113 + 56U);
    t131 = *((char **)t114);
    t138 = ((char*)((ng4)));
    memset(t91, 0, 8);
    xsi_vlog_unsigned_add(t91, 32, t131, 6, t138, 32);
    t139 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t139, t91, 0, 0, 6, 0LL);
    goto LAB134;

LAB132:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 3048);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 6, t6, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t7, t8, 0, 0, 6, 0LL);
    goto LAB134;

LAB137:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(116, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 6, 0LL);
    goto LAB141;

LAB144:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(118, ng0);
    t26 = ((char*)((ng1)));
    t27 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 6, 0LL);
    goto LAB148;

}


extern void work_m_00000000002395536328_2582214024_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Cont_53_1,(void *)Cont_54_2,(void *)Always_56_3,(void *)Cont_62_4,(void *)Cont_63_5,(void *)Always_65_6,(void *)Always_71_7};
	xsi_register_didat("work_m_00000000002395536328_2582214024", "isim/test_timer_isim_beh.exe.sim/work/m_00000000002395536328_2582214024.didat");
	xsi_register_executes(pe);
}
