#include<stdio.h>
#include<stdlib.h>
#include"wintolinux.h"
#include<string.h>

#include "operation_type.h"

#ifndef _MSC_VER
#define OPTYPE_FILE "optype/all.txt"
#else
#define OPTYPE_FILE "optype\\all.txt"
#endif

FILE *fp_optype;

long VV_num_add=0;
long VV_num_mul=0;
long VM_num_add=0;
long VM_num_mul=0;
long MV_num_add=0;
long MV_num_mul=0;
long MM_num_add=0;
long MM_num_mul=0;
long IV_num_add=0;
long IV_num_mul=0;
long IM_num_add=0;
long IM_num_mul=0;
long exp_num=0;

void open_file_optype()
{
	if(access("optype",0))
	{
		if( system("mkdir optype") !=0 )
		{
			printf(" cann't not creat optype folder.\n");
			exit(0);
		}
	}
	errno_t err;
	if((err=fopen_s(&fp_optype,OPTYPE_FILE,"w+"))!=0)
	{
		printf("can not open %s file in operation_type.cpp.erron:%s\n",OPTYPE_FILE,strerror(err));
		exit(0);
	}
}

void close_file_optype()
{
	fclose(fp_optype);
}

void print_optype()
{
	open_file_optype();
	fprintf(fp_optype,"VV_num_add:%ld\nVM_num_add:%ld\nMV_num_add:%ld\nMM_num_add:%ld\nIV_num_add:%ld\nIM_num_add:%ld\nexp_num_add:%ld\n",VV_num_add,VM_num_add,MV_num_add,MM_num_add,IV_num_add,IM_num_add,exp_num);
	fprintf(fp_optype,"VV_num_mul:%ld\nVM_num_mul:%ld\nMV_num_mul:%ld\nMM_num_mul:%ld\nIV_num_mul:%ld\nIM_num_mul:%ld\n",VV_num_mul,VM_num_mul,MV_num_mul,MM_num_mul,IV_num_mul,IM_num_mul);
	close_file_optype();
}
