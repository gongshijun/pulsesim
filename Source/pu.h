#ifndef _PU_H
#define _PU_H

#include "ps_pipeline.h"

extern bool load(INS_OPD op,long length,int buff_id,long buff_addr,int);
extern bool launch(G_M* M,int row,int col,int buff_id,long buff_addr,int mat_num,int);
extern bool store(INS_OPD op,long length,int buff_id,long buff_addr,int);
extern bool wb(G_M* M,int row,int col,int buff_id,long buff_addr,int mat_num,int);
extern bool mov(INS_OPD op1,INS_OPD op2,int);
extern bool extmov(INS_OPD op1,INS_OPD op2,int);
extern bool dmalr(INS_OPD op,int);
extern bool dmalc(INS_OPD op,int);
extern bool dmasr(INS_OPD op,int);
extern bool dmasc(INS_OPD op,int);
extern bool prodvm(INS_OPD op1, INS_OPD op2,G_M* M,INS_OPD op4,int mat_num,int,int);
extern bool prodvmp(INS_OPD op1,G_M* M,INS_OPD op3,int mat_num,int,int);
extern bool prodmv(INS_OPD op1, INS_OPD op2, G_M* M,INS_OPD op4,int mat_num,int,int);
extern bool prodmvp(INS_OPD op1,G_M* M,INS_OPD op3,int mat_num,int,int);
extern bool prodvv(G_M* M, INS_OPD op1, INS_OPD op2,INS_OPD op3,int mat_num,int,int);
extern bool prodvvp(INS_OPD op1,INS_OPD op2,INS_OPD op3,int,int);
extern bool prodvvd(INS_OPD op3, INS_OPD op1, INS_OPD op2,int,int);
extern bool addv(INS_OPD op3, INS_OPD op1, INS_OPD op2,int,int);
extern bool addm(G_M* M3,G_M* M1,G_M* M2,int mat_num1,int mat_num2,int mat_num3,int,int);
extern bool subv(INS_OPD op3,INS_OPD op1,INS_OPD op2,int,int);
extern bool subm(G_M* M3,G_M* M1,G_M* M2,int mat_num1,int mat_num2,int mat_num3,int,int);
extern bool scale(INS_OPD op2,INS_OPD op1,short scale_factor,int,int);
extern bool diff(INS_OPD op2,INS_OPD op1,int,int);
extern bool randgen(INS_OPD op,int);
extern bool sum(INS_OPD op,G_M* M,int);
extern bool max(INS_OPD op1,INS_OPD op2,INS_OPD op3,int);
extern bool probcmp(INS_OPD op3,INS_OPD op2,INS_OPD op1,int);
extern bool bias(INS_OPD op2,INS_OPD op1,short bias,int,int);
extern bool act(INS_OPD op2,INS_OPD op1,short,int,int);

#endif /* _PU_H */
