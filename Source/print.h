#ifndef _PRINT_H
#define _PRINT_H

#include "ps_pipeline.h"

extern FILE* freport;

/* initialize debug information file pointer*/
extern void init_dbP_file();

extern bool myprintregB(RB rg);
extern bool myprintreg(RG rg);
extern bool myprint_BV();
extern bool myprint_RV();
extern bool myprint_RDV();
extern bool myprint_EXTV();
extern bool myprint_MAT();
extern bool myprint_BUFFER();
extern void myprint_fatal(char *s);
extern bool myprint_report(char *s0, long n0, char *s1, long n1, char *s2, long n2);
extern bool myprint_report0(char *s0, long n0, char *s1, long n1, char *s2, long n2);
extern void myprintreg_rb(RB rg);
extern void myprintreg_rp(RG rg);
extern bool myprint_BV_rp();
extern bool myprint_RV_rp();
extern bool myprint_RDV_rp();
extern bool myprint_EXTV_rp();
extern bool myprint_MAT_rp();
extern bool myprint_BUFFER_rp();

#endif /* _PRINT_H */
