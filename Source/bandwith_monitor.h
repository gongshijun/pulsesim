#ifndef _BANDWITH_MONITOR_H
#define _BANDWITH_MONITOR_H

/* include header file register.h */
#include "ps_pipeline.h"

/* define short data type size for count bandwith*/
#define SHORT_SIZE 2

/* define the file to save bandwith*/
#define BANDWITN "bandwith\\bandwith.txt"

// declare the counter of arithmetic operator of addition
extern long addition_num;
// declare the counter of arithmetic operator of multiplication
extern long multiplication_num;

// declare the counter of the in bandwith of accelerate buffer Rbuffer 
extern long Rbuffer_in_bandwith;
// declare the counter of the out bandwitn of accelerate buffer Rnuffer
extern long Rbuffer_out_bandwith;
// declare the counter of the in bandwith of accelerate buffer Cbuffer
extern long Cbuffer_in_bandwith;
// declare the counter of the out bandwith of accelerate buffer Cbuffer
extern long Cbuffer_out_bandwith;
//declare the counter of the in bandwith of accelerate buffer Mbuffer
extern long Mbuffer_in_bandwith;
//declare the counter of the out bandwith of accelerate buffer Mbuffer
extern long Mbuffer_out_bandwith;

/* declare the counter of in-out bandwith of RV register file. RG_NUM from register.h show to the number of RV*/
//extern long RV_in_bandwith[RG_NUM];
//extern long RV_out_bandwith[RG_NUM];
extern long *RV_in_bandwith;
extern long *RV_out_bandwith;

/* declare the counter of in-out bandwith of BV register file. BV_NUM from register.h show to the number of BV*/
//extern long BV_in_bandwith[BV_NUM];
//extern long BV_out_bandwith[BV_NUM];
extern long *BV_in_bandwith;
extern long *BV_out_bandwith;

/* declare the counter of in-out bandwith of RDV register file. RDV_NUM from register.h show to the number of RDV*/
//extern long RDV_in_bandwith[RDV_NUM];
//extern long RDV_out_bandwith[RDV_NUM];
extern long *RDV_in_bandwith;
extern long *RDV_out_bandwith;

/* declare the counter of in-out bandwith of RDV register file. EXTV_NUM from register.h show to the number of EXTV*/
//extern long EXTV_in_bandwith[EXTV_NUM];
//extern long EXTV_out_bandwith[EXTV_NUM];
extern long *EXTV_in_bandwith;
extern long *EXTV_out_bandwith;

/* declare the counter of in-out bandwith of MAT data structure. M_LAYER from register.h show to the number of M_LAYER*/
//extern long MAT_in_bandwith[M_LAYER];
//extern long MAT_out_bandwith[M_LAYER];
extern long *MAT_in_bandwith;
extern long *MAT_out_bandwith;

/* declare the counter of in-out bandwith of local_buffer. local buffer include buffer0,buffer1,buffer2*/
extern long buffer0_in_bandwith;
extern long buffer0_out_bandwith;
extern long buffer1_in_bandwith;
extern long buffer1_out_bandwith;
extern long buffer2_in_bandwith;
extern long buffer2_out_bandwith;

/* declare the counter of in-out bandwith of memory*/
extern long mem_in_bandwith;
extern long mem_out_bandwith;

/* declare the print the bandwith function*/
extern void print_bandwith();

/* declare the function of temporary storage the data of bandwith*/
extern void bw_sub_temp_save();

/* declare the function of storage the data of bandwith to the file*/
extern void save_temp_bw();

/* dynamic allocation band-with structure data */
extern void init_bw_sd();

#endif /* _BANDWITH_MONITOR_H */
