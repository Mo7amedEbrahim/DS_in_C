/*
 *		BY: Mohammed Gaafar
 */

#include "Stack.h"

void CreateStack(Stack *ps){
	ps->top = -1;
}

void Push(Stack *ps,StackEntry e){
	ps->top++;
	ps->entry[ps->top] = e;
}

int StackFull(Stack *ps){
	return (ps->top == MAXSIZE-1);
}

void Pop(Stack *ps,StackEntry *pe){
	*pe = ps->entry[ps->top];
	ps->top--;
}

int StackEmpty(Stack *ps){
	return (ps->top == -1);
}

void StackTop(Stack *ps,StackEntry *pe){
	*pe = ps->entry[ps->top];
}

int StackSize(Stack *ps){
	return (ps->top)+1;
}

void ClearStack(Stack *ps){
	ps->top = -1;
}

void TraverseStack(Stack *ps,void (*pf)(StackEntry)){
	for(int i=ps->top;i>=0;i--){
		(*pf)(ps->entry[i]);
	}
}