#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include "fixcomp.h"
#include "bandwith_monitor.h"
#include "pulse_error.h"

short fixadd(short a, short b,int ins_line)
{
	addition_num++;
	int a0,b0,c;
	a0=a;
	b0=b;
	c=a0+b0;
	if(c>32767)
	{
		if(!qGetD){
			print_data_error("The data is greater than the maximum number of short can said",ins_line);
		}
		return 32767;
	}
	else if (c<-32768)
	{
		if(!qGetD){
			print_data_error("The data is less than the minimum number can short said",ins_line);
		}
		return -32768;
	}
	else
	{
		return c;
	}
}

short fixmul(short a, short b,int ins_line)
{
	multiplication_num++;
	long a0,b0,c;
	a0=a;
	b0=b;
	c=a0*b0;
	c=(c>>10)+((c>>9)&1);
	if(c>32767)
	{
		if(!qGetD){
		print_data_error("The data is greater than the maximum number of short can said",ins_line);
		}
		return 32767;
	}
	else if(c<-32768)
	{
		if(!qGetD){
		print_data_error("The data is less than the minimum number can short said",ins_line);
		}
		return -32768;
	}
	else
	{
		return short(c);
	}

}

short fixactexp(short a,int ins_line)
{
	double a0;
	a0 = 1 + exp(float(-a/1024.0000));
	a0 = 1/a0;
	long b0;
	b0 = (a0 * 1024);
	if(b0>32767)
	{
		if(!qGetD){
		print_data_error("The data is greater than the maximum number of short can said",ins_line);
		}
		return 32767;
	}
	else if(b0<-32768)
	{
		if(!qGetD){
		print_data_error("The data is less than the minimum number can short said",ins_line);
		}
		return -32768;
	}
	else
	{
		return short(b0);
	}
}
