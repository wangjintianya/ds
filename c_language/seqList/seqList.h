#ifndef __SEQ_LIST__
#define __SEQ_LIST__

#define N 100
typedef int data_t;

typedef struct seqList {
	data_t data[N];	
	int last;
} SeqList;

int isFull(SeqList *l);
int getLength(SeqList *l);
SeqList *createSeqList();
int clearSeqList(SeqList* l);

int insertSeqList(SeqList *l, data_t data, int pos);
int updateSeqList(SeqList *l, data_t newData, int pos);
int deleteSeqList(SeqList *l, int pos);
void selectSeqList(SeqList *l);
int searchSeqList(SeqList *l, data_t data);

#endif
