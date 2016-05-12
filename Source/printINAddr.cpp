#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "printINAddr.h"
#include "wintolinux.h"

#define FILE_ADDR "addr.txt"

FILE * fp_addr_IN;

void openprintAddr()
{
	errno_t err;
	err = fopen_s(&fp_addr_IN,FILE_ADDR,"w+");
	if(err != 0)
	{
		printf("can not creat %s file .-----%s\n",FILE_ADDR,strerror(err));
		exit(0);
	}
}

void closeprintAddr()
{
	fclose(fp_addr_IN);
}

void printAddr(long inaddr)
{
	fprintf(fp_addr_IN,"%ld\n",inaddr);
}
