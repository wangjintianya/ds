#include <stdio.h>
#include "seqList.h"

int main(int argc, char *argv[])
{

	SeqList *l;
	l = createSeqList();
	int i= 0;
	for (i = 0; i < 6; i++) {
		insertSeqList(l, i, i);
	}
	
	selectSeqList(l);
	updateSeqList(l, 100, 3);

	selectSeqList(l);
	deleteSeqList(l, 2);
	selectSeqList(l);
	clearSeqList(l);

	return 0;
}
