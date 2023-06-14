#ifndef _DLINK_LIST_
#define _DLINK_LIST_

typedef int data_t;

typedef struct node {
	data_t data;
	struct node *prior;
	struct node *next;
} NodeDlink, *DlinkList;

DlinkList createDlinkList();
int clearDlinkList(DlinkList l);
int insertDlinkList(DlinkList l, data_t data, int pos);
int deleteDlinkList(DlinkList l, int pos);
void selectDlinkList(DlinkList l);
int searchDlinkList(DlinkList l, data_t data);
DlinkList getNode (DlinkList l, int pos);
DlinkList reverseDlinkList(DlinkList l);

#endif
