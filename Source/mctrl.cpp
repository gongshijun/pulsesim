#include<stdio.h>

#include "ps_pipeline.h"
#include "mctrl.h"
#include "memop.h"
#include "fileVariant.h"

void Init_mm()
{
	MM_add_start=0;
	MM_add_end=INIT_MEM_SIZE;
	readfile(con_mem_tmp,0,INIT_MEM_SIZE,MM);
}

void load_mm(char *filename,long address,long size)
{
	MM_add_start=address;
	MM_add_end=address+INIT_MEM_SIZE;
	readfile(filename,address, size, MM); //load mm.mem to MM
}

void store_mm(char *filename,long address,long size)
{
	writefile(filename,address,size,MM);
}

short read_mm(long addr)
{
	//printf("--------------------------------------%d\n",MM[addr-MM_add_start]);
	if((addr>=MM_add_start)&&(addr<MM_add_end))
		return MM[addr-MM_add_start].M;
	else
	{
		store_mm(con_mem_tmp,MM_add_start,INIT_MEM_SIZE);
		load_mm(con_mem_tmp,addr,INIT_MEM_SIZE);
		return MM[addr-MM_add_start].M;
	}
}

void write_mm(long addr,short data)
{
	if((addr>=MM_add_start)&&(addr<MM_add_end))
		MM[addr-MM_add_start].M=data;
	else
	{
		store_mm(con_mem_tmp,MM_add_start,INIT_MEM_SIZE);
		load_mm(con_mem_tmp,addr,INIT_MEM_SIZE);
		MM[addr-MM_add_start].M=data;
	}
}

/*
void show_mm(long start,long end)
{
	showfile(con_mem_tmp, start, end); //show content of MM from start to end
}*/
