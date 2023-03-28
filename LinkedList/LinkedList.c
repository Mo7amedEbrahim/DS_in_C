#include <stdlib.h>
#include "LinkedList.h"

void CreateList(List *pl){
    pl->head = NULL;
    pl->size =0;
}
int ListEmpty(List *pl){
    return !pl->size;
}
int ListFull(List *pl){
    return 0;
}
int ListSize(List *pl){
    return pl->size;
}
void DestroyList(List *pl){
    ListNode *pn = NULL;
    while(pl->head){
        pn= pl->head->next;
        free(pl->head);
        pl->head=pn;
    }
    pl->size = 0;
}

void TraverseList(List *pl,void(*pf)(ListEntry e)){
    ListNode *pn = pl->head;
    while(pn){
        (*pf)(pn->entry);
        pn = pn->next;
    }
}

int InsertList(int p,ListEntry e,List *pl){
    ListNode *pn , *qn;
    int i;
    if(pn=(ListNode *)malloc(sizeof(ListNode))){
        pn->entry = e;
        pn->next = NULL;
        if(p == 0){
            pn->next = pl->head;
            pl->head = pn;
        }
        else{
            for(qn=pl->head,i=0;i<p-1;i++){
                qn = qn->next;
            }
            pn->next = qn->next;
            qn->next = pn;
        }
        pl->size++;
        return 1;
    }
    else return 0;
}
void DeleteList(int p,ListEntry *pe,List *pl){
    int i;
    ListNode *pn, *temp;
    if(p == 0){
        *pe = pl->head->entry;
        temp = pl->head->next;
        free(pl->head);
        pl->head = temp;
    }
    else{
        for(pn=pl->head,i=0;i<p-1;i++){
            pn=pn->next;
        }
        *pe = pn->next->entry;
        temp = pn-> next ->next;
        free(pn->next);
        pn->next = temp;
    }
    pl->size++;
}

void RetrieveList(int p,ListEntry *pe,List *pl){
    int i;
    ListNode *pq;
    for(pq = pl->head,i=0;i<p;i++){
        pq = pq->next;
    }
    *pe = pq->entry;
}
void ReplaceList(int p,ListEntry e,List *pl){
    int i;
    ListNode *pq;
    for(pq = pl->head,i=0;i<p;i++){
        pq = pq->next;
    }
    pq->entry = e;
}