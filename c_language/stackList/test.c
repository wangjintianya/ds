#include "stackList.h"

int main(int argc, char *argv[]) {
	stackList *s;
	s = createStackList();
	push(s, 1);
	push(s, 3);
	push(s, 3);

	printf("%d\n", pop(s));
	printf("%d\n", pop(s));
	printf("%d\n", pop(s));

	return 0;
}
