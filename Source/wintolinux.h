#ifndef _WIN_TO_LINUX_H
#define _WIN_TO_LINUX_H

#ifndef _MSC_VER
#include <sys/io.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
typedef int errno_t;
#define CLK_TCK CLOCKS_PER_SEC
inline
char* strtok_s(char* s,const char* delm,char** context)
{
      return strtok_r(s,delm,context);
}

extern errno_t gmtime_s(struct tm* tm_time,time_t *c_time);
extern errno_t fopen_s(FILE** fp,const char* filename,const char* mode);
extern char* itoa(int num, char* str, int base);
extern char* ltoa(long int num, char* str, int base);

#else
#include <io.h>
#endif
#endif    /* wintolinux.h */
