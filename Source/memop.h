#ifndef _MEM_OP_H
#define _MEM_OP_H

#include "ps_pipeline.h"

extern bool readfile(char *filename,long address,long size, M_M *read);
extern bool writefile(char *filename,long address,long size,M_M *write);
//extern bool showfile(char *filename,long start,long end);

#endif
