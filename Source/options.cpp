#include <stdio.h>
#include <stdlib.h>
#include "wintolinux.h"
#include <string.h>

#include "options.h"
#include "common.h"
#include "fileVariant.h"

/*
 * This options package allows the user to specify the name, description,
 * location, and default values of program option variables.  In addition,
 * two built in options are supported:
 *
 *   -config <filename>		# load options from <filename>
 *   -dumpconfig <filename>	# save current option into <filename>
 *
 * NOTE: all user-installed option names must begin with a `-', e.g., `-debug'
 */
/****************************************************************************
*This options package includes the input options. 
*"-p" option, it points to the program document
*"-m" option, it points to the memory document
*"-r" option, it points to the report document
*
*"-t" option, it is the single step debug option. click "down", the program 
*             executs one step, click "enter" the program executs to end
*"-h" option, it is the help option
*****************************************************************************/

bool optionanaly(int argc,char *argv[])
{
	int i;
	if (argc == 1)
	{
		// default use inst.txt and mem.txt file
		if ((access("inst.txt", 4) == 0) && (access("mem.txt", 4) == 0))
		{
			strcpy(pmname, "inst.txt");
			strcpy(mmname, "mem.txt");
		}
		else
		{
			goto help;
		}
	}
	for(i=1;i<argc;)
	{
		if(strcmp(argv[i],"-p")==0)
		{
			// printf("option---%s\n",argv[i]);
			i++;
			char_replace(argv[i],pmname,'\\',"\\\\");
			//strcpy(pmname,argv[i]);
		}
		else if(strcmp(argv[i],"-m")==0)
		{
			// printf("option---%s\n",argv[i]);
			i++;
			char_replace(argv[i],mmname,'\\',"\\\\");
			// strcpy(mmname,argv[i]);
		}
		else if(strcmp(argv[i],"-r")==0)
		{
			// printf("option---%s\n",argv[i]);
			i++;
			char_replace(argv[i],rpname,'\\',"\\\\");
			// strcpy(rpname,argv[i]);

		}
		else if(strcmp(argv[i],"-t")==0)
		{
			stdebug_fl=OP_VALID;
			//	 i++;
			//stdebug_ck=str2num(argv[i]);
		}
		else if(strcmp(argv[i],"-h")==0)
		{
			goto help;
		}
		else
		{
			printf("----------unrecognized options--------\n");
help:
			printf("  -p [file_address]: points to the program document\n");
			printf("  -m [file_address]: points to the memory document\n");
			printf("  -r [file_address]: points to the report document\n");
			printf("  -t: single step debug\n");
			//printf("  -e: print the execution state default not print\n");
			//printf("  -d: print the buffer and register data\n");
			printf("  -h: help option\n");
			exit(0);
		}
		i++;
	}
	return 1;
}
