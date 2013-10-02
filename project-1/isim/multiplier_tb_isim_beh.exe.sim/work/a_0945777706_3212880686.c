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
static const char *ng0 = "//psf/Host/Users/winda/Documents/hartford/ECE534/PROJECT/project-1/multiplier.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_0945777706_3212880686_p_0(char *t0)
{
    char t1[16];
    char t25[16];
    char t30[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t31;
    int t32;
    char *t33;
    int t34;
    int t35;
    unsigned char t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;

LAB0:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 4656U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t1, t3, t2, (unsigned char)0);
    t5 = (t0 + 1132U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    memcpy(t5, t4, t8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 4672U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t1, t3, t2, (unsigned char)0);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    memcpy(t5, t4, t8);
    xsi_set_current_line(51, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)0, 8U);
    t4 = (t0 + 1268U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t2, 8U);
    xsi_set_current_line(52, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)0, 8U);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t2, 8U);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4837);
    *((int *)t2) = 0;
    t3 = (t0 + 4841);
    *((int *)t3) = 3;
    t9 = 0;
    t10 = 3;

LAB2:    if (t9 <= t10)
        goto LAB3;

LAB5:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1404U);
    t3 = *((char **)t2);
    t2 = (t0 + 4736U);
    t4 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t3, t2);
    t5 = (t1 + 12U);
    t8 = *((unsigned int *)t5);
    t8 = (t8 * 1U);
    t15 = (8U != t8);
    if (t15 == 1)
        goto LAB51;

LAB52:    t6 = (t0 + 2404);
    t7 = (t6 + 32U);
    t17 = *((char **)t7);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 8U);
    xsi_driver_first_trans_fast_port(t6);
    t2 = (t0 + 2360);
    *((int *)t2) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1132U);
    t5 = *((char **)t4);
    t4 = (t0 + 4837);
    t11 = *((int *)t4);
    t12 = (t11 - 3);
    t8 = (t12 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t4));
    t13 = (1U * t8);
    t14 = (0 + t13);
    t6 = (t5 + t14);
    t15 = *((unsigned char *)t6);
    t16 = (t15 == (unsigned char)1);
    if (t16 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t2 = (t0 + 4837);
    t9 = *((int *)t2);
    t3 = (t0 + 4841);
    t10 = *((int *)t3);
    if (t9 == t10)
        goto LAB5;

LAB50:    t11 = (t9 + 1);
    t9 = t11;
    t4 = (t0 + 4837);
    *((int *)t4) = t9;
    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 4845);
    t18 = (t0 + 1200U);
    t19 = *((char **)t18);
    t20 = (3 - 3);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t18 = (t19 + t22);
    t24 = ((STD_STANDARD) + 720);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 3;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (3 - 0);
    t29 = (t28 * 1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t30 + 0U);
    t31 = (t27 + 0U);
    *((int *)t31) = 3;
    t31 = (t27 + 4U);
    *((int *)t31) = 0;
    t31 = (t27 + 8U);
    *((int *)t31) = -1;
    t32 = (0 - 3);
    t29 = (t32 * -1);
    t29 = (t29 + 1);
    t31 = (t27 + 12U);
    *((unsigned int *)t31) = t29;
    t23 = xsi_base_array_concat(t23, t1, t24, (char)97, t7, t25, (char)97, t18, t30, (char)101);
    t31 = (t0 + 1336U);
    t33 = *((char **)t31);
    t31 = (t33 + 0);
    t29 = (4U + 4U);
    memcpy(t31, t23, t29);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t0 + 4837);
    t4 = xsi_vhdl_bitvec_sll(t4, t3, 8U, *((int *)t2));
    t5 = (t0 + 1336U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t4, 8U);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1472U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4849);
    *((int *)t2) = 0;
    t3 = (t0 + 4853);
    *((int *)t3) = 7;
    t11 = 0;
    t12 = 7;

LAB9:    if (t11 <= t12)
        goto LAB10;

LAB12:    goto LAB7;

LAB10:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1404U);
    t5 = *((char **)t4);
    t4 = (t0 + 4849);
    t28 = *((int *)t4);
    t32 = (t28 - 7);
    t8 = (t32 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t4));
    t13 = (1U * t8);
    t14 = (0 + t13);
    t6 = (t5 + t14);
    t15 = *((unsigned char *)t6);
    t7 = (t0 + 1336U);
    t17 = *((char **)t7);
    t7 = (t0 + 4849);
    t34 = *((int *)t7);
    t35 = (t34 - 7);
    t20 = (t35 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t7));
    t21 = (1U * t20);
    t22 = (0 + t21);
    t18 = (t17 + t22);
    t16 = *((unsigned char *)t18);
    t23 = ((STD_STANDARD) + 720);
    t19 = xsi_base_array_concat(t19, t1, t23, (char)99, t15, (char)99, t16, (char)101);
    t24 = (t0 + 1472U);
    t26 = *((char **)t24);
    t36 = *((unsigned char *)t26);
    t27 = ((STD_STANDARD) + 720);
    t24 = xsi_base_array_concat(t24, t25, t27, (char)97, t19, t1, (char)99, t36, (char)101);
    t31 = (t0 + 1608U);
    t33 = *((char **)t31);
    t31 = (t33 + 0);
    t29 = (1U + 1U);
    t37 = (t29 + 1U);
    memcpy(t31, t24, t37);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1608U);
    t3 = *((char **)t2);
    t2 = (t0 + 4857);
    t38 = 1;
    if (3U == 3U)
        goto LAB25;

LAB26:    t38 = 0;

LAB27:    if (t38 == 1)
        goto LAB22;

LAB23:    t7 = (t0 + 1608U);
    t17 = *((char **)t7);
    t7 = (t0 + 4860);
    t39 = 1;
    if (3U == 3U)
        goto LAB31;

LAB32:    t39 = 0;

LAB33:    t36 = t39;

LAB24:    if (t36 == 1)
        goto LAB19;

LAB20:    t24 = (t0 + 1608U);
    t26 = *((char **)t24);
    t24 = (t0 + 4863);
    t40 = 1;
    if (3U == 3U)
        goto LAB37;

LAB38:    t40 = 0;

LAB39:    t16 = t40;

LAB21:    if (t16 == 1)
        goto LAB16;

LAB17:    t41 = (t0 + 1608U);
    t42 = *((char **)t41);
    t41 = (t0 + 4866);
    t44 = 1;
    if (3U == 3U)
        goto LAB43;

LAB44:    t44 = 0;

LAB45:    t15 = t44;

LAB18:    if (t15 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1540U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((unsigned char *)t2) = (unsigned char)0;

LAB14:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1472U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 1404U);
    t4 = *((char **)t2);
    t2 = (t0 + 4849);
    t28 = *((int *)t2);
    t32 = (t28 - 7);
    t8 = (t32 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t2));
    t13 = (1U * t8);
    t14 = (0 + t13);
    t5 = (t4 + t14);
    t16 = *((unsigned char *)t5);
    t36 = (t15 ^ t16);
    t6 = (t0 + 1336U);
    t7 = *((char **)t6);
    t6 = (t0 + 4849);
    t34 = *((int *)t6);
    t35 = (t34 - 7);
    t20 = (t35 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t6));
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t7 + t22);
    t38 = *((unsigned char *)t17);
    t39 = (t36 ^ t38);
    t18 = (t0 + 1404U);
    t19 = *((char **)t18);
    t18 = (t0 + 4849);
    t49 = *((int *)t18);
    t50 = (t49 - 7);
    t29 = (t50 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, *((int *)t18));
    t37 = (1U * t29);
    t51 = (0 + t37);
    t23 = (t19 + t51);
    *((unsigned char *)t23) = t39;
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1540U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 1472U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = t15;

LAB11:    t2 = (t0 + 4849);
    t11 = *((int *)t2);
    t3 = (t0 + 4853);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB12;

LAB49:    t28 = (t11 + 1);
    t11 = t28;
    t4 = (t0 + 4849);
    *((int *)t4) = t11;
    goto LAB9;

LAB13:    xsi_set_current_line(63, ng0);
    t47 = (t0 + 1540U);
    t48 = *((char **)t47);
    t47 = (t48 + 0);
    *((unsigned char *)t47) = (unsigned char)1;
    goto LAB14;

LAB16:    t15 = (unsigned char)1;
    goto LAB18;

LAB19:    t16 = (unsigned char)1;
    goto LAB21;

LAB22:    t36 = (unsigned char)1;
    goto LAB24;

LAB25:    t8 = 0;

LAB28:    if (t8 < 3U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t5 = (t3 + t8);
    t6 = (t2 + t8);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB26;

LAB30:    t8 = (t8 + 1);
    goto LAB28;

LAB31:    t13 = 0;

LAB34:    if (t13 < 3U)
        goto LAB35;
    else
        goto LAB33;

LAB35:    t19 = (t17 + t13);
    t23 = (t7 + t13);
    if (*((unsigned char *)t19) != *((unsigned char *)t23))
        goto LAB32;

LAB36:    t13 = (t13 + 1);
    goto LAB34;

LAB37:    t14 = 0;

LAB40:    if (t14 < 3U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t31 = (t26 + t14);
    t33 = (t24 + t14);
    if (*((unsigned char *)t31) != *((unsigned char *)t33))
        goto LAB38;

LAB42:    t14 = (t14 + 1);
    goto LAB40;

LAB43:    t20 = 0;

LAB46:    if (t20 < 3U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t45 = (t42 + t20);
    t46 = (t41 + t20);
    if (*((unsigned char *)t45) != *((unsigned char *)t46))
        goto LAB44;

LAB48:    t20 = (t20 + 1);
    goto LAB46;

LAB51:    xsi_size_not_matching(8U, t8, 0);
    goto LAB52;

}


extern void work_a_0945777706_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0945777706_3212880686_p_0};
	xsi_register_didat("work_a_0945777706_3212880686", "isim/multiplier_tb_isim_beh.exe.sim/work/a_0945777706_3212880686.didat");
	xsi_register_executes(pe);
}
