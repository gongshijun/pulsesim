#include <stdlib.h>
#include "wintolinux.h"
#include <string.h>

#include "op_common.h"

void create_folder(char* folderName)
{
	if(access(folderName,0))
	{
		char cmd[50]="";
		sprintf(cmd,"%s %s","mkdir",folderName);
		if(system(cmd) != 0 )
		{
			printf(" can not create %s folder. \n",folderName);
			printf(" can create %s folder by hand movement. \n",folderName);
			exit(0);
		}
	}
}

void open_file(FILE **fp,char* fileName,char* strF,char* promptMess)
{
	errno_t err;
	if((err = fopen_s(fp,fileName,strF)))
	{
		printf(" %s error:%s\n",promptMess,strerror(err));
		exit(0);
	}
}

void close_file(FILE *fp)
{
	fclose(fp);
}

void convert_to_b_memData(char* source,char* dest)
{
	char buff_b_d[50];
	int i=0;
	//FILE* fp_st = fopen("debugRtlData.txt","w+");
	//for(;i<8192;i++)
	//{
	//	if(i==4095)
	//		fprintf(fp_st,"%d",2);
	//	else
	//		fprintf(fp_st,"%d\n",2);
	//}
	//fclose(fp_st);
	int source_data;
	FILE* fp_s = fopen(source,"r");
	if(fp_s==0)
	{
		printf("can not open %s in save_shortDataTB.cpp function convert_to_b_memData\n",source);
		exit(0);
	}
	FILE* fp_d = fopen(dest,"w+");
	if(fp_d==0)
	{
		printf("can not open %s in save_shortDataTB.cpp function convert_to_b_memData\n",dest);
		exit(0);
	}
	i=0;
	while(!feof(fp_s))
	{
		fscanf(fp_s,"%d",&source_data);
		itoa(source_data,buff_b_d,2);
		int i,l,j=0;
		l = strlen(buff_b_d);
		if(l>16)
		{
			for(i=16;i<=32;i++)
			{
				buff_b_d[j++]=buff_b_d[i];
			}
		}
		if(i != 4095)
		{
			fprintf(fp_d,"%016s\n",buff_b_d);
		}
		else
		{
			fprintf(fp_d,"%016s",buff_b_d);
		}
		i++;
	}
	fclose(fp_s);
	fclose(fp_d);
}
