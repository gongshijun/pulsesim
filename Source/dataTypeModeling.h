#ifndef _DATA_TYPE_MODELING_H
#define _DATA_TYPE_MODELING_H

typedef  short PS_ENT_TYPE;
typedef  short *PS_PTR_TYPE;

/* convert string to PS_ENT_TYPE */
extern PS_ENT_TYPE str2pstype(char* str);

/* convert float to PS_ENT_TYPE */
extern PS_ENT_TYPE float2pstype(char* str);

/* convert float to PS_ENT_TYPE */
extern bool floatTopstype(
	char *filename0,    /* resource file name */
	char *filename1);    /* destination file name */

/* convert PS_ENT_TYPE to float */
extern bool pstypeTofloat(
	char *filename0,    /* resource file name */
	char *filename1);    /* destination file name */

#endif /* _DATA_TYPE_MODELING_H */
