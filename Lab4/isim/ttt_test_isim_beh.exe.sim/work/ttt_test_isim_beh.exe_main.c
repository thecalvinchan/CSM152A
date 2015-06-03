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
    work_m_00000000002808773361_2817006733_init();
    work_m_00000000002348810200_1110640149_init();
    work_m_00000000000586461399_3387435714_init();
    work_m_00000000000349700831_1197368640_init();
    work_m_00000000003586887259_1300592386_init();
    work_m_00000000000080337523_0806602298_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000080337523_0806602298");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
