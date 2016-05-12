#include <stdio.h>
#include <stdlib.h>
#include "wintolinux.h"
#include <string.h>

#include "print_error.h"

#define ERROR_FILE "error"
#define DIRECTORY_INSR_ERROR "error\\instError.txt"
#define decode_error "error\\decode_error.txt"

FILE *fp_instError = NULL;

void create_errorFolder()
{
	if(access(ERROR_FILE,0))
	{
		if(system("mkdir error") != 0 )
		{
			printf(" can not create error folder. \n");
			printf(" can create error folder by hand movement. \n");
			exit(0);
		}
	}
}

void open_instError()
{
	create_errorFolder();
	errno_t err;
	if((err = fopen_s(&fp_instError,DIRECTORY_INSR_ERROR,"w+")))
	{
		printf(" can not create instError.txt. error:%s\n",strerror(err));
		printf(" can create instError.txt by hand movement. \n");
		exit(0);
	}
}

void close_instError()
{
	fclose(fp_instError);
}

void print_instError(char* errorStr,long indexInst)
{
	fprintf(fp_instError,"%s %ld\n",errorStr,indexInst);
}

void print_error_ex(char* str)
{
	FILE *fp;
	create_errorFolder();
	fp = fopen(decode_error,"w+");
	if(fp==NULL)
	{
		printf("can't open error file \n");
		exit(0);
	}
	fprintf(fp,"%s\n",str);
	fclose(fp);
}
