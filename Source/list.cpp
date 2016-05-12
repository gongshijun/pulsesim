#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct NODE* init_node()
{
	struct NODE* pnode=NULL;
	pnode=(struct NODE*)malloc(sizeof(struct NODE));
	pnode->mem_addr=0;
	pnode->flag=0;
	pnode->next=NULL;
	return pnode;
}

void add_node(struct NODE* pNode,long mem_addr,bool flag)
{
	struct NODE* p1=NULL;
	struct NODE *p2=NULL;
	p1=(struct NODE*)malloc(sizeof(struct NODE));
	p1->mem_addr=mem_addr;
	p1->flag=flag;
	p1->next=NULL;
	p2=pNode;
	while(p2->next!=NULL)
	{
		p2=p2->next;
	}
	p2->next=p1;
}

void clr_nodes(struct NODE* pnode)
{
	struct NODE* p1=pnode,*p2=NULL;
	while(p1!=NULL)
	{
		p2=p1->next;
		free(p1);
		p1=p2;
	}
	pnode=NULL;
}

bool find_flag(struct NODE* pnode,long mem_addr)
{
	struct NODE* p1=pnode;
	while(p1->next!=NULL)
	{
		if(p1->next->mem_addr==mem_addr)
		{
			return p1->next->flag;
		}
		p1=p1->next;
	}
	return 0;
}
