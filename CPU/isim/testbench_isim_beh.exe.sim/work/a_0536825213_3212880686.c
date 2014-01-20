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

/* This file is designed for use with ISim build 0x6dd86d03 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//psf/Host/Users/winda/Documents/hartford/ECE534/PROJECT/alu/system.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0536825213_3212880686_p_0(char *t0)
{
    char t17[16];
    char t20[16];
    char t29[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t18;
    unsigned int t19;
    char *t21;
    int t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;

LAB0:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 660U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t2 = (t0 + 4204);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 3936);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 776U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2064U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 2064U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB31;

LAB32:
LAB12:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2340U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB50;

LAB52:
LAB51:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2432U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB53;

LAB55:
LAB54:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 2524U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB56;

LAB58:
LAB57:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 8294);
    t12 = (t0 + 3988);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 4U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4024);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 4060);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 4060);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1604U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4024);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 8160U);
    t5 = (t0 + 8298);
    t11 = (t17 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 1;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t19;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t17);
    if (t6 == 1)
        goto LAB20;

LAB21:    t12 = (t0 + 2248U);
    t13 = *((char **)t12);
    t12 = (t0 + 8160U);
    t14 = (t0 + 8300);
    t16 = (t20 + 0U);
    t21 = (t16 + 0U);
    *((int *)t21) = 0;
    t21 = (t16 + 4U);
    *((int *)t21) = 1;
    t21 = (t16 + 8U);
    *((int *)t21) = 1;
    t22 = (1 - 0);
    t19 = (t22 * 1);
    t19 = (t19 + 1);
    t21 = (t16 + 12U);
    *((unsigned int *)t21) = t19;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t12, t14, t20);
    if (t9 == 1)
        goto LAB23;

LAB24:    t7 = (unsigned char)0;

LAB25:    t3 = t7;

LAB22:    if (t3 == 1)
        goto LAB17;

LAB18:    t21 = (t0 + 2248U);
    t26 = *((char **)t21);
    t21 = (t0 + 8160U);
    t27 = (t0 + 8302);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 0);
    t19 = (t32 * 1);
    t19 = (t19 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t19;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t26, t21, t27, t29);
    if (t33 == 1)
        goto LAB26;

LAB27:    t25 = (unsigned char)0;

LAB28:    t1 = t25;

LAB19:    if (t1 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 8032U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t17, t4, t2, 1);
    t8 = (t17 + 12U);
    t19 = *((unsigned int *)t8);
    t42 = (1U * t19);
    t1 = (4U != t42);
    if (t1 == 1)
        goto LAB29;

LAB30:    t11 = (t0 + 3988);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t11);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(124, ng0);
    t31 = (t0 + 1144U);
    t37 = *((char **)t31);
    t31 = (t0 + 3988);
    t38 = (t31 + 32U);
    t39 = *((char **)t38);
    t40 = (t39 + 40U);
    t41 = *((char **)t40);
    memcpy(t41, t37, 4U);
    xsi_driver_first_trans_fast(t31);
    goto LAB15;

LAB17:    t1 = (unsigned char)1;
    goto LAB19;

LAB20:    t3 = (unsigned char)1;
    goto LAB22;

LAB23:    t21 = (t0 + 1512U);
    t23 = *((char **)t21);
    t10 = *((unsigned char *)t23);
    t24 = (t10 == (unsigned char)3);
    t7 = t24;
    goto LAB25;

LAB26:    t31 = (t0 + 1604U);
    t34 = *((char **)t31);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)3);
    t25 = t36;
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t42, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1696U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t2 = (t0 + 4060);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1788U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4024);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2248U);
    t4 = *((char **)t2);
    t2 = (t0 + 8160U);
    t5 = (t0 + 8304);
    t11 = (t17 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 1;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t19 = (t19 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t19;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t17);
    if (t6 == 1)
        goto LAB39;

LAB40:    t12 = (t0 + 2248U);
    t13 = *((char **)t12);
    t12 = (t0 + 8160U);
    t14 = (t0 + 8306);
    t16 = (t20 + 0U);
    t21 = (t16 + 0U);
    *((int *)t21) = 0;
    t21 = (t16 + 4U);
    *((int *)t21) = 1;
    t21 = (t16 + 8U);
    *((int *)t21) = 1;
    t22 = (1 - 0);
    t19 = (t22 * 1);
    t19 = (t19 + 1);
    t21 = (t16 + 12U);
    *((unsigned int *)t21) = t19;
    t9 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t12, t14, t20);
    if (t9 == 1)
        goto LAB42;

LAB43:    t7 = (unsigned char)0;

LAB44:    t3 = t7;

LAB41:    if (t3 == 1)
        goto LAB36;

LAB37:    t21 = (t0 + 2248U);
    t26 = *((char **)t21);
    t21 = (t0 + 8160U);
    t27 = (t0 + 8308);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 0);
    t19 = (t32 * 1);
    t19 = (t19 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t19;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t26, t21, t27, t29);
    if (t33 == 1)
        goto LAB45;

LAB46:    t25 = (unsigned char)0;

LAB47:    t1 = t25;

LAB38:    if (t1 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 8032U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t17, t4, t2, 1);
    t8 = (t17 + 12U);
    t19 = *((unsigned int *)t8);
    t42 = (1U * t19);
    t1 = (4U != t42);
    if (t1 == 1)
        goto LAB48;

LAB49:    t11 = (t0 + 3988);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t11);

LAB34:    goto LAB12;

LAB33:    xsi_set_current_line(132, ng0);
    t31 = (t0 + 1144U);
    t37 = *((char **)t31);
    t31 = (t0 + 3988);
    t38 = (t31 + 32U);
    t39 = *((char **)t38);
    t40 = (t39 + 40U);
    t41 = *((char **)t40);
    memcpy(t41, t37, 4U);
    xsi_driver_first_trans_fast(t31);
    goto LAB34;

LAB36:    t1 = (unsigned char)1;
    goto LAB38;

LAB39:    t3 = (unsigned char)1;
    goto LAB41;

LAB42:    t21 = (t0 + 1696U);
    t23 = *((char **)t21);
    t10 = *((unsigned char *)t23);
    t24 = (t10 == (unsigned char)3);
    t7 = t24;
    goto LAB44;

LAB45:    t31 = (t0 + 1788U);
    t34 = *((char **)t31);
    t35 = *((unsigned char *)t34);
    t36 = (t35 == (unsigned char)3);
    t25 = t36;
    goto LAB47;

LAB48:    xsi_size_not_matching(4U, t42, 0);
    goto LAB49;

LAB50:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2156U);
    t5 = *((char **)t2);
    t2 = (t0 + 4096);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB51;

LAB53:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2156U);
    t5 = *((char **)t2);
    t2 = (t0 + 4132);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB54;

LAB56:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2156U);
    t5 = *((char **)t2);
    t2 = (t0 + 4168);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB57;

}

static void work_a_0536825213_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(153, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 4240);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3944);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0536825213_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0536825213_3212880686_p_0,(void *)work_a_0536825213_3212880686_p_1};
	xsi_register_didat("work_a_0536825213_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_0536825213_3212880686.didat");
	xsi_register_executes(pe);
}
