#include <stdio.h>
#include "linkList.h"

int main(int argc, char *argv[])
{

	LinkList l, r;
	l = createLinkList();
	int d;
	while(1) {
		puts("please input data(-1 exit):");
		scanf("%d", &d);
		if (d == -1) {
			break;
		}
		insertLinkHead(l, d);
	}
	selectLinkList(l);

	r = reverseLinkList(l);
	
	selectLinkList(r);

	insertLinkList(r, 1000, 3);


	selectLinkList(r);

	return 0;
}
