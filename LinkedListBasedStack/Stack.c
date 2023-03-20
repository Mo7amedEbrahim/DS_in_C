#include <stdlib.h>
#include "Stack.h"

void CreateStack(Stack *ps){
	ps->top = NULL;
	ps->size = 0;
}

void Push(Stack *ps,StackEntry e){
	StackNode *pn = (StackNode *)malloc(sizeof(StackNode));
	pn->entry = e;
	pn->next = ps->top;
	ps->top = pn;
	ps->size++;
}

int StackFull(Stack *ps){
	return 0;
}

void Pop(Stack *ps,StackEntry *pe){
	StackNode *pn = NULL;
	*pe = ps->top->entry;
	pn = ps->top;
	ps->top = ps->top->next;
	free(pn);
	ps->size--;
}

int StackEmpty(Stack *ps){
	return (ps->size == 0);
}

void StackTop(Stack *ps,StackEntry *pe){
	*pe = ps->top->entry;
}

int StackSize(Stack *ps){
	return ps->size;
}

void ClearStack(Stack *ps){
	StackNode *pn = NULL;
	while(ps->top){
		pn = ps->top;
		ps->top = ps->top->next;
		free(pn);
	}
	ps->size = 0;
}

