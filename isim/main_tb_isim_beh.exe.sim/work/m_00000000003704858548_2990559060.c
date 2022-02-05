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
static const char *ng0 = "D:/Verilog/proyectofinal/sumador.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};



static void Always_30_0(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1776U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 1456U);
    t8 = *((char **)t7);
    t7 = (t0 + 1616U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 14, t8, 14, t9, 14);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 14);
    goto LAB13;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1456U);
    t4 = *((char **)t3);
    t3 = (t0 + 1616U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 14, t4, 14, t7, 14);
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 14);
    goto LAB13;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1456U);
    t4 = *((char **)t3);
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 14);
    goto LAB13;

}


extern void work_m_00000000003704858548_2990559060_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000003704858548_2990559060", "isim/main_tb_isim_beh.exe.sim/work/m_00000000003704858548_2990559060.didat");
	xsi_register_executes(pe);
}
