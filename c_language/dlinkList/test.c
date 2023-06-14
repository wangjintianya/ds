#include <stdio.h>
#include "dlinkList.h"

int main(int argc, char *argv[])
{

	DlinkList l;
	l = createDlinkList();
	
	selectDlinkList(l);
	insertDlinkList(l, 2, 1000);
	selectDlinkList(l);

	return 0;
}
