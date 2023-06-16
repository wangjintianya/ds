#ifndef _STACK_LIST_
#define _STACK_LIST_

#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef int data_t;

typedef struct stack{
     data_t data[N];
     int top;

} stackList;

extern stackList *createStackList();
extern data_t pop(stackList *s);
extern int push(stackList *s, data_t data);
extern int isEmpty(stackList *s);
extern int isFull(stackList *s);


#endif
