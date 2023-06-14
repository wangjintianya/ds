#ifndef _LINK_LIST_
#define _LINK_LIST_

typedef int data_t;

typedef struct node {
	data_t data;	
	struct node *next;
} NodeLink, *LinkList;

LinkList createLinkList();
int clearLinkList(LinkList l);
int insertLinkHead(LinkList l, data_t data);
int insertLinkList(LinkList l, data_t data, int pos);
int deleteLinkList(LinkList l, int pos);
void selectLinkList(LinkList l);
int searchLinkList(LinkList l, data_t data);
LinkList getNode (LinkList l, int pos);
LinkList reverseLinkList(LinkList l);

#endif
