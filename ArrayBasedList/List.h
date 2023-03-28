#ifndef _LIST_H_
#define _LIST_H_

#define MAXLIST 10
#define ListEntry int

typedef struct list{
    ListEntry entry[MAXLIST];
    int size;
}List;

void CreateList(List *);
int ListEmpty(List *);
int ListFull(List *);
int ListSize(List *);
void DestroyList(List *);
void InsertList(int ,ListEntry ,List *);
void DeleteList(int ,ListEntry *,List *);
void RetrieveList(int ,ListEntry *,List *);
void ReplaceList(int ,ListEntry ,List *);
void TraverseList(List *,void(*pf)(ListEntry e));


#endif