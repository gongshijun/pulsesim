#include <stdio.h>
#include <stdlib.h>
#include "wintolinux.h"

#include "pulse_error.h"

#define DATA_ERROR_FILE "err\\data_err.err"

FILE* data_error;

void open_err_file()
{
	if(access("err",0))
	{
		if( system("mkdir err") !=0 )
		{
			printf(" can not creat err folder.\n");
		}
	}

	data_error = fopen(DATA_ERROR_FILE,"w+");
	if(data_error == NULL)
	{
		printf("can not open %s file. \n",DATA_ERROR_FILE);
	}
}

void close_err_file()
{
	fclose(data_error);
}

void print_data_error(char* err_str,int ins_lines)
{
	fprintf(data_error,"%s in %d line.\n",err_str,ins_lines);
}
