#ifndef _STACK_H_
#define _STACK_H_
#define StackEntry	int
#define MAXSIZE 5

typedef struct stack{
	int top;
	StackEntry entry[MAXSIZE];
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