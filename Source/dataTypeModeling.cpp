#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dataTypeModeling.h"
#include "op_common.h"

PS_ENT_TYPE str2pstype(char* str)
{
	return (PS_ENT_TYPE)atoi(str);
}

PS_ENT_TYPE float2pstype(char* str)
{
	return (PS_ENT_TYPE)(atof(str)*1024);
}

bool floatTopstype(char *filename0,char *filename1)
{
	float buf0;
	char buff[100];
	PS_ENT_TYPE buf1;
	FILE *fp0,*fp1;
	sprintf(buff,"can't open filename0:%s file in float2short() dataTypeModeling.cpp \n",filename0);
	open_file(&fp0,filename0,"r",buff);
	sprintf(buff,"can't open filename1:%s file in float2short() dataTypeModeling.cpp \n",filename1);
    open_file(&fp1,filename1,"w+",buff);

	if (!feof(fp0))
	{
		fscanf(fp0,"%f",&buf0);
		buf1=PS_ENT_TYPE(buf0*1024);
		fprintf(fp1,"%d",buf1);
	}

	while(!feof(fp0))
	{
		fscanf(fp0,"%f",&buf0);
		buf1=PS_ENT_TYPE(buf0*1024);
		fprintf(fp1,"%s","\n");
		fprintf(fp1,"%d",buf1);
	}

	fclose(fp0);
	fclose(fp1);
	return 1;
}

/* convert PS_ENT_TYPE to float */
bool pstypeTofloat(char *filename0,char *filename1)
{
	int buf0;
	char buff[100];
	float buf1;
	FILE *fp0,*fp1;
	sprintf(buff,"can't open filename0:%s file in float2short() dataTypeModeling.cpp \n",filename0);
	open_file(&fp0,filename0,"r",buff);
	sprintf(buff,"can't open filename1:%s file in float2short() dataTypeModeling.cpp \n",filename1);
	open_file(&fp1,filename1,"w+",buff);

	if (!feof(fp0))
	{
		fscanf(fp0,"%d",&buf0);
		buf1=float(buf0/1024.000000);
		fprintf(fp1,"%f",buf1);
	}

	while(!feof(fp0))
	{
		fscanf(fp0,"%d",&buf0);
		buf1=float(buf0/1024.000000);
		fprintf(fp1,"%s","\n");
		fprintf(fp1,"%f",buf1);
	}

	fclose(fp0);
	fclose(fp1);
	return 1;
}
