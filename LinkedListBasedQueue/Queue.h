#ifndef _QUEUE_H_
#define _QUEUE_H_

#define QueueEntry	int

typedef struct queuenode{
	QueueEntry entry;
	struct queuenode *next;
}QueueNode;

typedef struct queue{
	QueueNode *front;
	QueueNode *rear;
	int size;
}Queue;

void CreateQueue(Queue *pq);
void Enqueue(Queue *pq,QueueEntry e);
void Dequeue(Queue *pq,QueueEntry *pe);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);

//Todo: TraverseQueue


#endif