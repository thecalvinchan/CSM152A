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
static const char *ng0 = "C:/Users/152/Documents/MeghaCalvin/Lab2/sign_magnitude_converter.v";
static unsigned int ng1[] = {4095U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {8, 0};
static int ng6[] = {7, 0};
static unsigned int ng7[] = {15U, 0U};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {2048, 0};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t33[8];
    char t47[8];
    char t51[8];
    char t59[8];
    char t101[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t102;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1448);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 12);

LAB8:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(42, ng0);

LAB12:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t17 = (t6 + 4);
    t18 = (t14 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t20 = (t15 ^ t16);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t18);
    t30 = (t25 | t26);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB16;

LAB13:    if (t30 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t28) = 1;

LAB16:    memset(t33, 0, 8);
    t27 = (t28 + 4);
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB20:    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    t41 = *((unsigned int *)t39);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB21;

LAB22:    memcpy(t59, t33, 8);

LAB23:    t91 = (t59 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t59);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t14);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB42;

LAB39:    if (t21 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t18 = (t6 + 4);
    t24 = *((unsigned int *)t18);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t30 = (t26 & t25);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t2, 32, t5, 4);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);

LAB45:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 8);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t14);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB70;

LAB67:    if (t21 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t6) = 1;

LAB70:    t18 = (t6 + 4);
    t24 = *((unsigned int *)t18);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t30 = (t26 & t25);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1048U);
    t14 = *((char **)t7);
    t7 = ((char*)((ng1)));
    t13 = *((unsigned int *)t14);
    t15 = *((unsigned int *)t7);
    t16 = (t13 ^ t15);
    *((unsigned int *)t6) = t16;
    t17 = (t14 + 4);
    t18 = (t7 + 4);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB9;

LAB10:
LAB11:    t27 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t6, 32, t27, 32);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 12);
    goto LAB8;

LAB9:    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t25 | t26);
    goto LAB11;

LAB15:    t19 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB19:    t29 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB20;

LAB21:    t43 = (t0 + 1928);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng5)));
    memset(t47, 0, 8);
    t48 = (t45 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB25;

LAB24:    t49 = (t46 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t45) < *((unsigned int *)t46))
        goto LAB26;

LAB27:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t47);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t52) != 0)
        goto LAB31;

LAB32:    t60 = *((unsigned int *)t33);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t33 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB23;

LAB25:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t47) = 1;
    goto LAB27;

LAB29:    *((unsigned int *)t51) = 1;
    goto LAB32;

LAB31:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB32;

LAB33:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t33 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t33);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB35;

LAB36:    xsi_set_current_line(43, ng0);

LAB38:    xsi_set_current_line(44, ng0);
    t97 = (t0 + 2088);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = ((char*)((ng2)));
    memset(t101, 0, 8);
    xsi_vlog_unsigned_lshift(t101, 12, t99, 12, t100, 32);
    t102 = (t0 + 2088);
    xsi_vlogvar_assign_value(t102, t101, 0, 0, 12);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB12;

LAB41:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(48, ng0);
    t19 = ((char*)((ng6)));
    t27 = (t0 + 1608);
    xsi_vlogvar_assign_value(t27, t19, 0, 0, 3);
    goto LAB45;

LAB46:    xsi_set_current_line(56, ng0);

LAB49:    xsi_set_current_line(57, ng0);
    t7 = (t0 + 1768);
    t14 = (t7 + 56U);
    t17 = *((char **)t14);
    t18 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t19 = (t17 + 4);
    t27 = (t18 + 4);
    t13 = *((unsigned int *)t17);
    t15 = *((unsigned int *)t18);
    t16 = (t13 ^ t15);
    t20 = *((unsigned int *)t19);
    t21 = *((unsigned int *)t27);
    t22 = (t20 ^ t21);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t27);
    t26 = (t24 | t25);
    t30 = (~(t26));
    t31 = (t23 & t30);
    if (t31 != 0)
        goto LAB53;

LAB50:    if (t26 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t6) = 1;

LAB53:    t39 = (t6 + 4);
    t32 = *((unsigned int *)t39);
    t34 = (~(t32));
    t35 = *((unsigned int *)t6);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);

LAB56:    goto LAB48;

LAB52:    t29 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(58, ng0);

LAB57:    xsi_set_current_line(59, ng0);
    t43 = (t0 + 1608);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t48 = (t45 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB59;

LAB58:    t49 = (t46 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB59;

LAB62:    if (*((unsigned int *)t45) < *((unsigned int *)t46))
        goto LAB60;

LAB61:    t52 = (t28 + 4);
    t38 = *((unsigned int *)t52);
    t40 = (~(t38));
    t41 = *((unsigned int *)t28);
    t42 = (t41 & t40);
    t53 = (t42 != 0);
    if (t53 > 0)
        goto LAB63;

LAB64:
LAB65:    goto LAB56;

LAB59:    t50 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB61;

LAB60:    *((unsigned int *)t28) = 1;
    goto LAB61;

LAB63:    xsi_set_current_line(60, ng0);

LAB66:    xsi_set_current_line(61, ng0);
    t58 = ((char*)((ng8)));
    t63 = (t0 + 1768);
    xsi_vlogvar_assign_value(t63, t58, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 3, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    goto LAB65;

LAB69:    t17 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(70, ng0);

LAB74:    xsi_set_current_line(71, ng0);
    t19 = ((char*)((ng6)));
    t27 = (t0 + 1608);
    xsi_vlogvar_assign_value(t27, t19, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB73;

}


extern void work_m_00000000002664391555_3287253468_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002664391555_3287253468", "isim/test_sign_magnitude_converter_isim_beh.exe.sim/work/m_00000000002664391555_3287253468.didat");
	xsi_register_executes(pe);
}
