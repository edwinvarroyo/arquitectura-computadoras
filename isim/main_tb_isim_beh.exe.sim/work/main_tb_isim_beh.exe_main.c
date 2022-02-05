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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001442495519_2030911003_init();
    work_m_00000000003112652602_1593392166_init();
    work_m_00000000004211213602_2411424903_init();
    work_m_00000000003704858548_2990559060_init();
    work_m_00000000002377914722_1323274903_init();
    work_m_00000000004200632462_2900878581_init();
    work_m_00000000001164953924_2973510161_init();
    work_m_00000000003010190656_0750423891_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003010190656_0750423891");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
