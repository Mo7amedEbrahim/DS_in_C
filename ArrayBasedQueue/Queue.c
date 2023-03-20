#include "Queue.h"

void CreateQueue(Queue *pq){
	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}

void Enqueue(Queue *pq,QueueEntry e){
	if(pq->size == MAXSIZE-1)	pq->rear = 0;
	else pq->rear++;
	pq->entry[pq->rear] = e;
	pq->size++;
}

int QueueFull(Queue *pq){
	return (pq->size == MAXSIZE);
}

void Dequeue(Queue *pq,QueueEntry *pe){
	*pe = pq->entry[pq->front];
	if(pq->front == MAXSIZE-1)	pq->front = 0;
	else 						pq->front++;
	pq->size--;
}

int QueueEmpty(Queue *pq){
	return (pq->size == 0);
}

int QueueSize(Queue *pq){
	return pq->size;
}

void ClearQueue(Queue *pq){
	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}