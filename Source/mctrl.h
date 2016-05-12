#ifndef _MCTRL_H
#define _MCTRL_H

extern void Init_mm();
extern void load_mm(char*,long,long);
extern void store_mm(char*,long,long);
extern short read_mm(long);
extern void write_mm(long,short);
//extern void show_mm(long,long);

#endif
