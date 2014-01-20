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
static const char *ng0 = "//psf/Host/Users/winda/Documents/hartford/ECE534/PROJECT/alu/ALU.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_854811550_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2906604474_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t2 = (t0 + 592U);
    t3 = *((char **)t2);
    t2 = (t0 + 5548U);
    t4 = ieee_p_3499444699_sub_854811550_3536714472(IEEE_P_3499444699, t1, t3, t2, 5);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (5U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3124);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3040);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t6, 0);
    goto LAB6;

}

static void work_a_2906604474_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(30, ng0);

LAB3:    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 5564U);
    t4 = ieee_p_3499444699_sub_854811550_3536714472(IEEE_P_3499444699, t1, t3, t2, 5);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (5U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3160);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 5U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3048);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t6, 0);
    goto LAB6;

}

static void work_a_2906604474_3212880686_p_2(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 2412U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 5681);
    t5 = xsi_mem_cmp(t2, t3, 2U);
    if (t5 == 1)
        goto LAB5;

LAB9:    t6 = (t0 + 5683);
    t8 = xsi_mem_cmp(t6, t3, 2U);
    if (t8 == 1)
        goto LAB6;

LAB10:    t9 = (t0 + 5685);
    t11 = xsi_mem_cmp(t9, t3, 2U);
    if (t11 == 1)
        goto LAB7;

LAB11:
LAB8:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t2 = (t0 + 5612U);
    t4 = (t0 + 1236U);
    t6 = *((char **)t4);
    t4 = (t0 + 5612U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t12, t3, t2, t6, t4);
    t9 = (t12 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t21 = (5U != t20);
    if (t21 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 3196);
    t13 = (t10 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 5U);
    xsi_driver_first_trans_fast(t10);

LAB4:    xsi_set_current_line(31, ng0);

LAB21:    t2 = (t0 + 3056);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB22;

LAB1:    return;
LAB5:    xsi_set_current_line(33, ng0);
    t13 = (t0 + 1144U);
    t14 = *((char **)t13);
    t13 = (t0 + 5612U);
    t15 = (t0 + 1236U);
    t16 = *((char **)t15);
    t15 = (t0 + 5612U);
    t17 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t14, t13, t16, t15);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t21 = (5U != t20);
    if (t21 == 1)
        goto LAB13;

LAB14:    t22 = (t0 + 3196);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 5U);
    xsi_driver_first_trans_fast(t22);
    goto LAB4;

LAB6:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t2 = (t0 + 5612U);
    t4 = (t0 + 1236U);
    t6 = *((char **)t4);
    t4 = (t0 + 5612U);
    t7 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t12, t3, t2, t6, t4);
    t9 = (t12 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t21 = (5U != t20);
    if (t21 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 3196);
    t13 = (t10 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 5U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t2 = (t0 + 3196);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 5U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB12:;
LAB13:    xsi_size_not_matching(5U, t20, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(5U, t20, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(5U, t20, 0);
    goto LAB18;

LAB19:    t3 = (t0 + 3056);
    *((int *)t3) = 0;
    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}

static void work_a_2906604474_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 3232);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3064);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2906604474_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2700U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t2 = (t0 + 5687);
    t5 = xsi_mem_cmp(t2, t3, 5U);
    if (t5 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3268);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t6 = (t4 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);

LAB4:    xsi_set_current_line(40, ng0);

LAB11:    t2 = (t0 + 3072);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 3268);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 3072);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_2906604474_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t3 = (4 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3304);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3080);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2906604474_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2906604474_3212880686_p_0,(void *)work_a_2906604474_3212880686_p_1,(void *)work_a_2906604474_3212880686_p_2,(void *)work_a_2906604474_3212880686_p_3,(void *)work_a_2906604474_3212880686_p_4,(void *)work_a_2906604474_3212880686_p_5};
	xsi_register_didat("work_a_2906604474_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_2906604474_3212880686.didat");
	xsi_register_executes(pe);
}
