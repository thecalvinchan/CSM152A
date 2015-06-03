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
static const char *ng0 = "C:/Users/152/Documents/MeghaCalvin/Lab4/gamecontroller.v";
static int ng1[] = {0, 0};
static const char *ng2 = "press";
static int ng3[] = {3, 0};
static int ng4[] = {1, 0};



static void Cont_37_0(char *t0)
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

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4984);
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
    t16 = (t0 + 4872);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_38_1(char *t0)
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

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 5048);
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
    t16 = (t0 + 4888);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_40_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(41, ng0);

LAB2:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 9);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_47_3(char *t0)
{
    char t11[8];
    char t12[8];
    char t35[8];
    char t51[8];
    char t59[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
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
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t2, 32, t4, 2);
    t3 = (t0 + 1528U);
    t5 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t11, 32, t5, 2);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t12, 0, 0, 5);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 | t16);
    t18 = (~(t17));
    t19 = (t14 & t18);
    if (t19 != 0)
        goto LAB13;

LAB10:    if (t17 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t11) = 1;

LAB13:    memset(t12, 0, 8);
    t21 = (t11 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t11);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t21) != 0)
        goto LAB16;

LAB17:    t28 = (t12 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB18;

LAB19:    memcpy(t59, t12, 8);

LAB20:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(60, ng0);

LAB36:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t20 = (t5 + 72U);
    t21 = *((char **)t20);
    t27 = (t0 + 2888);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    xsi_vlog_generic_get_index_select_value(t12, 1, t4, t21, 2, t33, 5, 2);
    memset(t11, 0, 8);
    t34 = (t12 + 4);
    t6 = *((unsigned int *)t34);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t34) == 0)
        goto LAB37;

LAB39:    t36 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t36) = 1;

LAB40:    t37 = (t11 + 4);
    t50 = (t12 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    *((unsigned int *)t11) = t14;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t50) != 0)
        goto LAB42;

LAB41:    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 1U);
    t22 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t22 & 1U);
    t52 = (t11 + 4);
    t23 = *((unsigned int *)t52);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t26 = (t25 & t24);
    t29 = (t26 != 0);
    if (t29 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB34:    goto LAB8;

LAB12:    t20 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t12) = 1;
    goto LAB17;

LAB16:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB17;

LAB18:    t33 = (t0 + 1528U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB24;

LAB21:    if (t47 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t35) = 1;

LAB24:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t52) != 0)
        goto LAB27;

LAB28:    t60 = *((unsigned int *)t12);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t12 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t51) = 1;
    goto LAB28;

LAB27:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB28;

LAB29:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t12 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t12);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB31;

LAB32:    xsi_set_current_line(56, ng0);

LAB35:    goto LAB34;

LAB37:    *((unsigned int *)t11) = 1;
    goto LAB40;

LAB42:    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t50);
    *((unsigned int *)t11) = (t15 | t16);
    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t50);
    *((unsigned int *)t37) = (t17 | t18);
    goto LAB41;

LAB43:    xsi_set_current_line(62, ng0);

LAB46:    xsi_set_current_line(63, ng0);
    t58 = (t0 + 2728);
    t63 = (t58 + 56U);
    t64 = *((char **)t63);
    t65 = (t0 + 2408);
    t73 = (t0 + 2408);
    t74 = (t73 + 72U);
    t87 = *((char **)t74);
    t93 = (t0 + 2888);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    xsi_vlog_generic_convert_bit_index(t35, t87, 2, t95, 5, 2);
    t96 = (t35 + 4);
    t30 = *((unsigned int *)t96);
    t78 = (!(t30));
    if (t78 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    t4 = (t0 + 2568);
    t5 = (t4 + 72U);
    t20 = *((char **)t5);
    t21 = (t0 + 2888);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_bit_index(t11, t20, 2, t28, 5, 2);
    t33 = (t11 + 4);
    t6 = *((unsigned int *)t33);
    t78 = (!(t6));
    if (t78 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t5) == 0)
        goto LAB51;

LAB53:    t20 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t20) = 1;

LAB54:    t21 = (t11 + 4);
    t27 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t11) = t14;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB56;

LAB55:    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 1U);
    t22 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t22 & 1U);
    t28 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t28, t11, 0, 0, 1, 0LL);
    goto LAB45;

LAB47:    xsi_vlogvar_wait_assign_value(t65, t64, 0, *((unsigned int *)t35), 1, 0LL);
    goto LAB48;

LAB49:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB50;

LAB51:    *((unsigned int *)t11) = 1;
    goto LAB54;

LAB56:    t15 = *((unsigned int *)t11);
    t16 = *((unsigned int *)t27);
    *((unsigned int *)t11) = (t15 | t16);
    t17 = *((unsigned int *)t21);
    t18 = *((unsigned int *)t27);
    *((unsigned int *)t21) = (t17 | t18);
    goto LAB55;

}


extern void work_m_00000000000586461399_3387435714_init()
{
	static char *pe[] = {(void *)Cont_37_0,(void *)Cont_38_1,(void *)Initial_40_2,(void *)Always_47_3};
	xsi_register_didat("work_m_00000000000586461399_3387435714", "isim/ttt_test_isim_beh.exe.sim/work/m_00000000000586461399_3387435714.didat");
	xsi_register_executes(pe);
}
