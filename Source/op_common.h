#ifndef _OP_COMMON_H
#define _OP_COMMON_H

#include <stdio.h>

extern void create_folder(char* folderName);    /* folder name */

extern void open_file(FILE **fp,    /* file ptr */
	char* fileName,    /* file name */
	char* strF,    /* file format */
	char* promptMess);    /* prompt message */

extern void close_file(FILE *fp);    /* file ptr */

/* convert short data to binary */
extern void convert_to_b_memData(
	char *source,    /* source file name */
	char *dest);    /* destination file name */

#endif /* _OP_COMMON_H */
