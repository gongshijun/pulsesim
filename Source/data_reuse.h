#ifndef _DATA_REUSE_H
#define _DATA_REUSE_H

/* macro of save data of data reuse file name*/
#ifndef _MSC_VER
#define REUSE_FILE "datareuse/all.txt"
#else
#define REUSE_FILE "datareuse\\all.txt"
#endif

/* define the structure of counting data reuse needed variants */
typedef struct _DATA_REUSE
{
	bool rv_isupdate[16];//mark the RV register file is update,1 show updated,0 show not update//
	bool rv_hdata[16];//mark the RV register file has data,1 show having data,0 show not//
	long rv_clk[16];//save the RV register file has use' clock//

	bool mat_isupdate[8];
	bool mat_hdata[8];
	long mat_clk[8];

	bool rbuffer_isupdate;
	bool rbuffer_hdata;
	long rbuffer_clk;
	bool cbuffer_isupdate;
	bool cbuffer_hdata;
	long cbuffer_clk;
	bool mbuffer_isupdate;
	bool mbuffer_hdata;
	long mbuffer_clk;
}data_reuse;

/* define structure of save clock number*/
typedef struct _REUSE_CLK_NODE
{
	long clk_num;// to save data of clock//
	struct _REUSE_CLK_NODE *pnext;// point to next node//
}node_rs_clk;

/* */
typedef struct _REUSE_DATA_NUM
{
	long count_num; //count the memory structure update times//
	node_rs_clk * pReuseCLK; //point to a structure saving the update clock gap
	struct _REUSE_DATA_NUM * dnext; //point to next node//
}reuse_num;

extern data_reuse st_dr;

extern reuse_num RV_dreuse[16];

extern reuse_num MAT_dreuse[8];

extern reuse_num Rbuffer_dreuse;
extern reuse_num Cbuffer_dreuse;
extern reuse_num Mbuffer_dreuse;

extern void Init_Data_Reuse();//initialize the variants of counting the data reuse needed//
extern void add_node_rs_clk(reuse_num*,long);//add a node of saving data reuse clock numbers //
extern void creat_node_rs_num(reuse_num*);//add a node of saving data reuse//
extern void print_data_rs(reuse_num*,char*);//print the data of data reuse//
extern void free_Data_Reuse(reuse_num*);//free memory//
extern void print_all_data_rs(); //print all data//
extern void free_all_data_reuse();

#endif /* _DATA_REUSE_H */
