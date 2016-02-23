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
static const char *ng0 = "C:/vhdl_stuff/exam1/vga.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2599083972_3965413181(char *, int , char *, char *);
unsigned char ieee_p_3620187407_sub_3958461249_3965413181(char *, int , char *, char *);
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_1110640149_3212880686_p_0(char *t0)
{
    char t7[16];
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    char *t21;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5356);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1880U);
    t4 = *((char **)t3);
    t3 = (t0 + 8348U);
    t5 = (t0 + 8446);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 11;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (11 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t7);
    if (t12 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1880U);
    t3 = *((char **)t1);
    t1 = (t0 + 8348U);
    t4 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t7, t3, t1, 1);
    t5 = (t7 + 12U);
    t11 = *((unsigned int *)t5);
    t19 = (1U * t11);
    t2 = (10U != t19);
    if (t2 == 1)
        goto LAB8;

LAB9:    t6 = (t0 + 5520);
    t8 = (t6 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 10U);
    xsi_driver_first_trans_fast(t6);

LAB6:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1972U);
    t3 = *((char **)t1);
    t1 = (t0 + 8364U);
    t4 = (t0 + 8458);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 11;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (11 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1880U);
    t3 = *((char **)t1);
    t1 = (t0 + 8348U);
    t4 = (t0 + 8470);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 11;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (11 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB13;

LAB14:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1972U);
    t3 = *((char **)t1);
    t1 = (t0 + 5556);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t8 = *((char **)t6);
    memcpy(t8, t3, 10U);
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB3;

LAB5:    xsi_set_current_line(77, ng0);
    t9 = xsi_get_transient_memory(10U);
    memset(t9, 0, 10U);
    t13 = t9;
    memset(t13, (unsigned char)2, 10U);
    t14 = (t0 + 5520);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 10U);
    xsi_driver_first_trans_fast(t14);
    goto LAB6;

LAB8:    xsi_size_not_matching(10U, t19, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(84, ng0);
    t8 = xsi_get_transient_memory(10U);
    memset(t8, 0, 10U);
    t9 = t8;
    memset(t9, (unsigned char)2, 10U);
    t13 = (t0 + 5556);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t8, 10U);
    xsi_driver_first_trans_fast(t13);
    goto LAB11;

LAB13:    xsi_set_current_line(86, ng0);
    t8 = (t0 + 1972U);
    t9 = *((char **)t8);
    t8 = (t0 + 8364U);
    t13 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t9, t8, 1);
    t14 = (t20 + 12U);
    t11 = *((unsigned int *)t14);
    t19 = (1U * t11);
    t12 = (10U != t19);
    if (t12 == 1)
        goto LAB15;

LAB16:    t15 = (t0 + 5556);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t21 = *((char **)t18);
    memcpy(t21, t13, 10U);
    xsi_driver_first_trans_fast(t15);
    goto LAB11;

LAB15:    xsi_size_not_matching(10U, t19, 0);
    goto LAB16;

}

static void work_a_1110640149_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5364);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 2156U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = (t0 + 5592);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 9U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 8482);
    t8 = (t0 + 5592);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 9U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

}

static void work_a_1110640149_3212880686_p_2(char *t0)
{
    char t6[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5372);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 8491);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t0 + 1880U);
    t11 = *((char **)t8);
    t8 = (t0 + 8348U);
    t12 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t4, t6, t11, t8);
    if (t12 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5628);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 8495);
    t5 = (t6 + 0U);
    t7 = (t5 + 0U);
    *((int *)t7) = 0;
    t7 = (t5 + 4U);
    *((int *)t7) = 3;
    t7 = (t5 + 8U);
    *((int *)t7) = 1;
    t9 = (3 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t7 = (t5 + 12U);
    *((unsigned int *)t7) = t10;
    t7 = (t0 + 1972U);
    t8 = *((char **)t7);
    t7 = (t0 + 8364U);
    t3 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t1, t6, t8, t7);
    if (t3 == 1)
        goto LAB14;

LAB15:    t2 = (unsigned char)0;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 5628);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB3;

LAB5:    xsi_set_current_line(110, ng0);
    t16 = (t0 + 5628);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);
    goto LAB6;

LAB8:    t13 = (t0 + 1880U);
    t14 = *((char **)t13);
    t13 = (t0 + 8348U);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t14, t13, 96);
    t3 = t15;
    goto LAB10;

LAB11:    xsi_set_current_line(116, ng0);
    t14 = (t0 + 5628);
    t16 = (t14 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t14);
    goto LAB12;

LAB14:    t11 = (t0 + 1972U);
    t13 = *((char **)t11);
    t11 = (t0 + 8364U);
    t12 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t13, t11, 2);
    t2 = t12;
    goto LAB16;

}

static void work_a_1110640149_3212880686_p_3(char *t0)
{
    char t1[16];
    char t7[16];
    char t13[16];
    char t18[16];
    char t25[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    int t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(123, ng0);

LAB3:    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t4 = (9 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = (256 - 45);
    t9 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t1, t2, t7, t12);
    t14 = (t0 + 1880U);
    t15 = *((char **)t14);
    t11 = (9 - 7);
    t16 = (t11 * 1U);
    t17 = (0 + t16);
    t14 = (t15 + t17);
    t19 = (t18 + 0U);
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
    t23 = (256 - 159);
    t20 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t13, t14, t18, t23);
    t26 = ((IEEE_P_2592010699) + 2332);
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t9, t1, (char)97, t20, t13, (char)101);
    t27 = (t1 + 12U);
    t22 = *((unsigned int *)t27);
    t28 = (1U * t22);
    t29 = (t13 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    t32 = (t28 + t31);
    t33 = (16U != t32);
    if (t33 == 1)
        goto LAB5;

LAB6:    t34 = (t0 + 5664);
    t35 = (t34 + 32U);
    t36 = *((char **)t35);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    memcpy(t38, t24, 16U);
    xsi_driver_first_trans_fast_port(t34);

LAB2:    t39 = (t0 + 5380);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t32, 0);
    goto LAB6;

}

static void work_a_1110640149_3212880686_p_4(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 1880U);
    t5 = *((char **)t4);
    t4 = (t0 + 8348U);
    t6 = ieee_p_3620187407_sub_3958461249_3965413181(IEEE_P_3620187407, 159, t5, t4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t21 = (t0 + 5700);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 5388);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 5700);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t13 = (t0 + 1972U);
    t14 = *((char **)t13);
    t13 = (t0 + 8364U);
    t15 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t14, t13, 525);
    t1 = t15;
    goto LAB7;

LAB8:    t10 = (t0 + 1972U);
    t11 = *((char **)t10);
    t10 = (t0 + 8364U);
    t12 = ieee_p_3620187407_sub_2599083972_3965413181(IEEE_P_3620187407, 44, t11, t10);
    t2 = t12;
    goto LAB10;

LAB11:    t7 = (t0 + 1880U);
    t8 = *((char **)t7);
    t7 = (t0 + 8348U);
    t9 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t8, t7, 800);
    t3 = t9;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(127, ng0);

LAB3:    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5736);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5396);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(128, ng0);

LAB3:    t1 = (t0 + 2340U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5772);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5404);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_7(char *t0)
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

LAB0:    xsi_set_current_line(130, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5808);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5412);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_8(char *t0)
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

LAB0:    xsi_set_current_line(131, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (7 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5844);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5420);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_9(char *t0)
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

LAB0:    xsi_set_current_line(132, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (6 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5880);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5428);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_10(char *t0)
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

LAB0:    xsi_set_current_line(133, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (5 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5916);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5436);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_11(char *t0)
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

LAB0:    xsi_set_current_line(134, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (4 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5952);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5444);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_12(char *t0)
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

LAB0:    xsi_set_current_line(135, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (3 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5988);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5452);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_13(char *t0)
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

LAB0:    xsi_set_current_line(136, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (2 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6024);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5460);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_14(char *t0)
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

LAB0:    xsi_set_current_line(137, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (1 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6060);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5468);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1110640149_3212880686_p_15(char *t0)
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

LAB0:    xsi_set_current_line(138, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = (0 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6096);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5476);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1110640149_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1110640149_3212880686_p_0,(void *)work_a_1110640149_3212880686_p_1,(void *)work_a_1110640149_3212880686_p_2,(void *)work_a_1110640149_3212880686_p_3,(void *)work_a_1110640149_3212880686_p_4,(void *)work_a_1110640149_3212880686_p_5,(void *)work_a_1110640149_3212880686_p_6,(void *)work_a_1110640149_3212880686_p_7,(void *)work_a_1110640149_3212880686_p_8,(void *)work_a_1110640149_3212880686_p_9,(void *)work_a_1110640149_3212880686_p_10,(void *)work_a_1110640149_3212880686_p_11,(void *)work_a_1110640149_3212880686_p_12,(void *)work_a_1110640149_3212880686_p_13,(void *)work_a_1110640149_3212880686_p_14,(void *)work_a_1110640149_3212880686_p_15};
	xsi_register_didat("work_a_1110640149_3212880686", "isim/vga_isim_beh.exe.sim/work/a_1110640149_3212880686.didat");
	xsi_register_executes(pe);
}
