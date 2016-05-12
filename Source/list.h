#ifndef _LIST_H
#define _LIST_H

struct NODE
{
	long mem_addr;
	bool flag;
	struct NODE * next;
};

extern struct NODE* init_node();
extern void add_node(struct NODE* pNode,long mem_addr,bool flag);
extern void clr_nodes(struct NODE* pnode);
extern bool find_flag(struct NODE* pnode,long mem_addr);

#endif /* _LIST_H */
