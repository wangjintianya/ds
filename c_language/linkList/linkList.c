#include <stdio.h>
#include <stdlib.h>
#include "linkList.h"

LinkList createLinkList() {	
	LinkList l = NULL;	
	if ((l = (LinkList)malloc(sizeof(NodeLink))) == NULL) {
		puts("malloc error");
		return l;
	}
	l->next = NULL;
	return l;
}

int clearLinkList(LinkList l) {
	if (l == NULL) {
		puts("LinkList l is NULL");
		return -1;
	}
	LinkList tmp;
	tmp = l;
	while(l) {
		free(l);
		l = tmp->next;
		tmp = l;
		free(l);
	}
	return 1;
} 

int insertLinkHead(LinkList l, data_t data) {
	if (l == NULL) {
        puts("LinkList l is NULL");
        return -1;
    }

	LinkList p;
	if ((p = (LinkList)malloc(sizeof(NodeLink))) == NULL) {
		puts("malloc errror");	
		return -1;
	}
	p->data = data;
	p->next = l->next;
	l->next = p;
	return 0;
}

int insertLinkList(LinkList l, data_t data, int pos) {
	if (l == NULL) {
        puts("LinkList l is NULL");
        return -1;
    }
	if (pos < 0) {
		puts("pos error");
		return -1;
	}

	LinkList p, q;
	if ((p = (LinkList)malloc(sizeof(NodeLink))) == NULL) {
		puts("malloc errror");
		return -1;
	}
	if (pos == 0) {
		return insertLinkHead(l, data);
	}
	q = getNode(l, pos-1);
	if (q == NULL) {
		puts("pos error");
		return -1;
	}
	p->data = data;
	p->next = q->next;
	q->next = p;
	return 0;
}

LinkList getNode (LinkList l, int pos) {
	LinkList p = NULL;
	if (l == NULL) {
        puts("LinkList l is NULL");
        return p;
    }
    if (pos < 0) {
        puts("pos error");
        return p;
    }
	int i = 0;
	p = l;
	while (p) {
		p = p->next;
		if (i != pos) {
			i++;
		}else {
			break;
		}
	}
	return p;
}

int searchLinkList(LinkList l, data_t data) {
	if (l == NULL) {                                                                                  
        puts("LinkList l is NULL");                                                                   
        return -1;
    }
	return -1;
}

void selectLinkList(LinkList l) {
	puts("----------start--------");
	while(l->next){
		printf(" %d ", l->next->data);
		l = l->next;
	}
	puts("");
	puts("----------end--------");
}


int deleteLinkList(LinkList l, int pos) {
	if (pos < 0) {
		puts("pos error");
		return -1;
	}
	LinkList p, q;
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

LinkList reverseLinkList(LinkList l) {
	if (l == NULL) {
         puts("LinkList l is NULL");
         return NULL;
    }
	LinkList r, p;
	r = createLinkList();
	while(l->next) {
		p = l->next;
		insertLinkHead(r, p->data);
		l = l->next;
	}
	return r;

}

