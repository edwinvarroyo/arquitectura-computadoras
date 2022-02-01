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
static const char *ng0 = "D:/Verilog/proyectofinal/memoria.v";
static const char *ng1 = "memoria.txt";



static void Initial_31_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2248);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}


extern void work_m_00000000002411834045_2900878581_init()
{
	static char *pe[] = {(void *)Initial_31_0};
	xsi_register_didat("work_m_00000000002411834045_2900878581", "isim/memoria_tb_isim_beh.exe.sim/work/m_00000000002411834045_2900878581.didat");
	xsi_register_executes(pe);
}
