#ifndef _STACK_H_
#define _STACK_H_

#define StackEntry int

typedef struct stacknode{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

typedef struct stack{
	struct stacknode *top;
	int size;
}Stack;

void CreateStack(Stack *ps);

void Push(Stack *ps,StackEntry e);
int StackFull(Stack *ps);

void Pop(Stack *ps,StackEntry *pe);
int StackEmpty(Stack *ps);

void StackTop(Stack *ps,StackEntry *pe);
int StackSize(Stack *ps);

void ClearStack(Stack *ps);
void TraverseStack(Stack *ps,void (*pf)(StackEntry));




#endif