#ifndef _MEM_MODELING_H
#define _MEM_MODELING_H

#include "dataTypeModeling.h"
#include "configuration.h"

struct M_M
{
	PS_ENT_TYPE M;
};


extern M_M *MM;

extern void init_MEM();

#endif /* _MEM_MODELING_H */
