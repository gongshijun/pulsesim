#ifndef _PRINT_ERROR_H
#define _PRINT_ERROR_H

/* operation inst error */
extern void open_instError();
extern void close_instError();
extern void print_instError(char* errorStr,    /* prompt message */
	long indexInst);    /* inst position */   

extern void print_error_ex(char*);

#endif /* _PRINT_ERROR_H */
