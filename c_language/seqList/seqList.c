#include <stdio.h>
#include <stdlib.h>
#include "seqList.h"

int isFull(SeqList *l) {
	if (l == NULL) {
		puts("SeqList *l is NUll");
	}	
	return l->last + 1 == N;
}

int getLength(SeqList *l) {
	if (l == NULL) {
        puts("SeqList *l is NUll");
    }
	return l->last;
}                                                                        

SeqList *createSeqList() {	
	SeqList *l = NULL;	
	l = (SeqList*)malloc(sizeof(SeqList));
	if (l == NULL) {
		puts("malloc error");
	}
	l->last = -1;
	return l;
}

int clearSeqList(SeqList* l) {
	if (l == NULL) {
		puts("SeqList *l is NULL");
		return -1;
	}
	free(l);
	l = NULL;
	return 1;
}             

int insertSeqList(SeqList *l, data_t data, int pos) {
	if (l == NULL) {
        puts("SeqList *l is NULL");
        return -1;
    }
	if (isFull(l)) {
		puts("SeqList *l is full");
		return -1;
	}
	if (pos < 0 || pos > l->last + 1) {
		puts("pos error");
		return -1;	
	}
	if (pos <= l->last) {
		for(int i = l->last; i >= pos; i--) {
			l->data[i+1] = l->data[i];
		}
	}
	l->data[pos] = data;
	l->last++;
	return 1;
}           

int updateSeqList(SeqList *l, data_t newData, int pos) {
	if (l == NULL) {
        puts("SeqList *l is NULL");                     
        return -1;
    }        
    if (pos < 0 || pos > l->last) {
        puts("pos error");
        return -1;  
    }
	l->data[pos] = newData;

	return 1;		
}

int deleteSeqList(SeqList *l, int pos) {
	if (l == NULL) {
        puts("SeqList *l is NULL");
        return -1;
    }
    if (pos < 0 || pos > l->last) {
        puts("pos error");
        return -1;
    }

	int i;
    for(i = pos; i < l->last; i++) {
        l->data[i] = l->data[i+1];
    }
	l->last--;
		
	return 1;
}

int searchSeqList(SeqList *l, data_t data) {
	if (l == NULL) {                                                                                  
        puts("SeqList *l is NULL");                                                                   
        return -1;
    }
	if (l->last == -1) {
		return -1;	
	}
	for (int i = 0; i < getLength(l); i++) {
		if (l->data[i] == data) {
			return i;
		}
	}
	return -1;
}

void selectSeqList(SeqList *l) {
	puts("----------start--------");
	for (int i = 0; i < l->last; i++) {
		printf("index: %d, value: %d \n", i, l->data[i]);
	}
	puts("----------end--------");
}
