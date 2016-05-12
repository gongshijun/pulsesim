#ifndef _COMMON_H
#define _COMMON_H

#include "localBufferModeling.h"

/* declare the function of get buffer point by buffid*/
extern struct MEM_B * get_buffp(int buffid);

/* declare the function*/
extern bool char_replace(char* source,char* dest,char s_c,char* d_s);


#endif
