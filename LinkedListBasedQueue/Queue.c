#include "Queue.h"
#include <stdlib.h>
void CreateQueue(Queue *pq){
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}

void Enqueue(Queue *pq,QueueEntry e){
	QueueNode *pn = (QueueNode *)malloc(sizeof(QueueNode));
	pn->next = NULL;
	pn->entry = e;
	if (!pq->rear)	pq->front = pn;
	else pq->rear->next = pn;
	pq->rear = pn;
	pq->size++;
}

void Dequeue(Queue *pq,QueueEntry *pe){
	QueueNode *pn = pq->front;
	*pe = pn->entry;
	pq->front = pq->front->next;
	free(pn);
	if(!pq->front) pq->rear = NULL;
	pq->size--;
}

int QueueEmpty(Queue *pq){
	return (pq->size == 0);
	//return (pq->front == 0);
}

int QueueFull(Queue *pq){
	return 0;
}

int QueueSize(Queue *pq){
	return pq->size;
}

void ClearQueue(Queue *pq){
	while(pq->front){
		pq->rear = pq->front->next;
		free(pq->front);
		pq->front = pq->rear;
	}
	pq->size =0;
}



