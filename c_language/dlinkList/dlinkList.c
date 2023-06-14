#include <stdio.h>
#include <stdlib.h>
#include "dlinkList.h"

DlinkList createDlinkList() {	
	DlinkList H, p, r;	
	if ((H = (DlinkList)malloc(sizeof(NodeDlink))) == NULL) {
		puts("malloc error");
		return H;
	}
	H->prior = H;
	H->next = H;
	r = H;
	data_t d;
	while (1) {
		puts("input data(-1 exit):");
		scanf("%d", &d);
		if (d == -1 ) {
			break;
		}

		if ((p = (DlinkList)malloc(sizeof(NodeDlink))) == NULL) {
			puts("malloc error");
			return H;
		}
		p->data = d;
		p->prior = r;
		p->next = r->next;
		r->next = p;
		H->prior = p;
		r = p;
	}

	return H;
}

int clearDlinkList(DlinkList l) {
	if (l == NULL) {
		puts("DlinkList l is NULL");
		return -1;
	}
	DlinkList tmp;
	tmp = l;
	while(l) {
		free(l);
		l = tmp->next;
		tmp = l;
		free(l);
	}
	return 1;
} 


int insertDlinkList(DlinkList l, data_t data, int pos) {
	if (l == NULL) {
        puts("DlinkList l is NULL");
        return -1;
    }
	if (pos < 0) {
		puts("pos error");
		return -1;
	}

	DlinkList p, q;
	if ((p = (DlinkList)malloc(sizeof(NodeDlink))) == NULL) {
		puts("malloc errror");
		return -1;
	}
	q = getNode(l, pos);
	if (q == NULL) {
		puts("pos error");
		return -1;
	}
	printf("%d", q->data);
	p->data = data;
	p->prior = q;
	p->next = q->next;
	q->next = p;
	q->next->prior = p;
	return 0;
}

DlinkList getNode (DlinkList l, int pos) {
	DlinkList p = NULL;
	if (l == NULL) {
        puts("DlinkList l is NULL");
        return p;
    }
    if (pos < 0) {
        puts("pos error");
        return p;
    }
	int i = 0;
	p = l->next;
	while (p != l) {
		if (i != pos) {
			i++;
		} else {
			break;
		}
		p = p->next;
	}
	return p;
}

int searchDlinkList(DlinkList l, data_t data) {
	if (l == NULL) {                                                                                  
        puts("DlinkList l is NULL");                                                                   
        return -1;
    }
	return -1;
}

void selectDlinkList(DlinkList l) {
	puts("----------start--------");
	DlinkList p;
	p = l->next;
	while(p != l){
		printf(" %d ", p->data);
		p = p->next;
	}
	puts("");
	puts("----------end--------");
}


int deleteDlinkList(DlinkList l, int pos) {
	if (pos < 0) {
		puts("pos error");
		return -1;
	}
	DlinkList p, q;
	if (pos == 0) {
		p = l;
	} else {
		p = getNode(l, pos-1);
	}
	if (p && p->next) {
		q = p->next;
		p->next = q->next;
		free(q);
		q = NULL;
		return 0;
	}
	return -1;
}


