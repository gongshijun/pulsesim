#ifndef _REPORT_STRING_H
#define _REPORT_STRING_H

#define REPORT_HEAD_FORMAT_ONE "//////////////////////////////////////////////////\nCopyrigth info\n(Reserved headline)\n\nfileName:pulsesim.rpt\nDate:"
#define REPORT_HEAD_FORMAT_TWO "//////////////////////////////////////////////////\n"

#define REPORT_HEAD "\nSimulation overview\n\nTotal static instruction:"
#define REPORT_HEAD_SECODE "Execution cycle:"
#define REPORT_HEAD_SECODE_BY "Simulation time (second):"

#define REPORT_BLOCK_ONE "\nA.Statistic of states of instruction execution:\n"
#define REPORT_BLOCK_ONE_HEAD "\ninsName     insNum     waitCycle     waitFuncUnitCycle     exeCycle\n"
#define REPORT_BLOCK_ONE_DATA_FORMAT "%-20s\t%-20ld\t%-20ld\t%-20ld\t%-20ld\n"

#define REPORT_BLOCK_TWO "\n\nB.Statistic of operation:\n"
#define REPORT_BLOCK_TWO_HEAD        "\nopType            num\n"
#define REPORT_BLOCK_TWO_DATA_FORMAT "%-20s\t%-20ld\n"

#define REPORT_BLOCK_THREE "\n\nC.Statistic of bandwith:\n"
#define REPORT_BLOCK_THREE_HEAD       "\nmoduleName     inBW     outBW\n"
#define RPORT_BLOCK_THREE_DATA_FORMAT    "%-20s\t%-20ld\t%-20ld\n"

#define REPORT_BLOCK_FOUR "\n\nD.Statistic of data reuse(detail description in datareuse.dr):\n"
#define REPORT_BLOCK_ROUR_HEAD "\n\n"


#endif /* _REPORT_STRING_H */
