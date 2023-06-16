#include "stackList.h"


stackList *createStackList() {
	stackList *s;
	s = NULL;
	if ((s = (stackList *)malloc(sizeof(stackList))) == NULL) {
		puts("stackList * malloc error");
		return s;
	}
	s->top = -1;

	return s;

}
data_t pop(stackList *s) {
	data_t d;
	d = 0;
	if (isEmpty(s)) {
		puts("stack is empty");
		return -1;
	}
	d = s->data[s->top--];
	return d;
}
int push(stackList *s, data_t data) {
	if (isFull(s)) {
		puts("stack full");
		return -1;
	}
	s->data[s->top+1] = data;
	s->top++;
	return 0;
}
int isEmpty(stackList *s) {
	return s->top == -1 ? 1: 0;
}
int isFull(stackList *s) {
	return s->top == N - 1 ? 1: 0;
}
