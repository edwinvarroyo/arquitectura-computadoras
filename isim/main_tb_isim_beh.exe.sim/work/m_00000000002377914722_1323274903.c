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
static const char *ng0 = "D:/Verilog/proyectofinal/mux.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {4, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1592U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB16:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1752U);
    t8 = *((char **)t7);
    memcpy(t9, t8, 8);
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 5);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    t4 = (t0 + 2632);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB17;

LAB18:    goto LAB15;

LAB9:    xsi_set_current_line(41, ng0);

LAB19:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memcpy(t9, t4, 8);
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2632);
    t4 = (t0 + 2632);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB20;

LAB21:    goto LAB15;

LAB11:    xsi_set_current_line(45, ng0);

LAB22:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2072U);
    t4 = *((char **)t3);
    memcpy(t9, t4, 8);
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2632);
    t4 = (t0 + 2632);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB23;

LAB24:    goto LAB15;

LAB13:    xsi_set_current_line(49, ng0);

LAB25:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2232U);
    t4 = *((char **)t3);
    memcpy(t9, t4, 8);
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 5);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2632);
    t4 = (t0 + 2632);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t10, 32, 1);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t6 = (!(t12));
    if (t6 == 1)
        goto LAB26;

LAB27:    goto LAB15;

LAB17:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t9), 1);
    goto LAB18;

LAB20:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t9), 1);
    goto LAB21;

LAB23:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t9), 1);
    goto LAB24;

LAB26:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t9), 1);
    goto LAB27;

}


extern void work_m_00000000002377914722_1323274903_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002377914722_1323274903", "isim/main_tb_isim_beh.exe.sim/work/m_00000000002377914722_1323274903.didat");
	xsi_register_executes(pe);
}
