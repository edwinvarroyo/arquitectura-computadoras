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
static const char *ng0 = "D:/Verilog/proyectofinal/Main.v";
static int ng1[] = {0, 0};



static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 14);

LAB1:    return;
}


extern void work_m_00000000000133909994_2973510161_init()
{
	static char *pe[] = {(void *)Initial_26_0};
	xsi_register_didat("work_m_00000000000133909994_2973510161", "isim/main_tb_isim_beh.exe.sim/work/m_00000000000133909994_2973510161.didat");
	xsi_register_executes(pe);
}
