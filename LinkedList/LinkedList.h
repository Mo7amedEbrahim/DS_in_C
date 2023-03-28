#ifndef _LIST_H_
#define _LIST_H_

#define ListEntry int

typedef struct listnode{
    ListEntry entry;
    struct listnode *next;
}ListNode;
typedef struct List{
    ListNode *head;
    int size;
}List;

void CreateList(List *);
int ListEmpty(List *);
int ListFull(List *);
int ListSize(List *);
void DestroyList(List *);
int InsertList(int ,ListEntry ,List *);
void DeleteList(int ,ListEntry *,List *);
void RetrieveList(int ,ListEntry *,List *);
void ReplaceList(int ,ListEntry ,List *);
void TraverseList(List *,void(*pf)(ListEntry e));


#endif