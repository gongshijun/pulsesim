/**********************
*
*  filename: main.cpp
*
*  file description: 
*/
#include <string.h>

#include "options.h"
#include "fileVariant.h"
#include "sim.h"
#include "dataTypeModeling.h"

int main(int argc,char *argv[])
{
	optionanaly(argc,argv);
	//strcpy(pmname,"inst.txt");
	//strcpy(mmname,"mem.txt");

	floatTopstype(mmname,con_mem_tmp);
	//convert_to_b_memData(con_mem_tmp,MEM_DATA_INIT);

	sim();

	//convert_to_b_memData(con_mem_tmp,MEM_DATA_EXE);
	pstypeTofloat(con_mem_tmp,mmname);

	return 1;
}
