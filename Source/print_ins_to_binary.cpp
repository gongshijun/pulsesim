#include<stdio.h>
#include<stdlib.h>
#include"wintolinux.h"

#include "print_ins_to_binary.h"

FILE *rtlB_1,*rtlB_2,*rtlB_3,*rtlB_4;

void open_file_ins_binary()
{
	if(access("ins_four",0))
	{
		if( system("mkdir ins_four") !=0 )
		{
			printf(" cann't not creat ins_four folder.\n");
		}
	}
	rtlB_1 = fopen(INS_BINARY_ONE,"w+");
	if(rtlB_1==NULL)
	{
		printf("cann't open %s file. \n",INS_BINARY_ONE);
		exit(0);
	}
	rtlB_2 = fopen(INS_BINARY_TOW,"w+");
	if(rtlB_2==NULL)
	{
		printf("cann't open %s file. \n",INS_BINARY_TOW);
		exit(0);
	}
	rtlB_3 = fopen(INS_BINARY_THREE,"w+");
	if(rtlB_3==NULL)
	{
		printf("cann't open %s file. \n",INS_BINARY_THREE);
		exit(0);
	}
	rtlB_4 = fopen(INS_BINARY_FOUR,"w+");
	if(rtlB_4==NULL)
	{
		printf("cann't open %s file. \n",INS_BINARY_FOUR);
		exit(0);
	}
}

void close_file_ins_binary()
{
	fclose(rtlB_1);
	fclose(rtlB_2);
	fclose(rtlB_3);
	fclose(rtlB_4);
}

void print_insBinary_to_four(char* ins_rtlB)
{
	FILE* fp = fopen(ins_rtlB,"r");
	if(fp==NULL)
	{
		printf("cann't open %s file. \n",ins_rtlB);
		exit(0);
	}
	open_file_ins_binary();
	char buff_insB[40];
	while(!feof(fp))
	{
		fscanf(fp,"%s\n",buff_insB);
		fprintf(rtlB_1,"%s\n",buff_insB);
		fscanf(fp,"%s\n",buff_insB);
		fprintf(rtlB_2,"%s\n",buff_insB);
		fscanf(fp,"%s\n",buff_insB);
		fprintf(rtlB_3,"%s\n",buff_insB);
		fscanf(fp,"%s\n",buff_insB);
		fprintf(rtlB_4,"%s\n",buff_insB);
	}
	close_file_ins_binary();
}
