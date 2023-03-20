#ifndef _QUEUE_H
#define _QUEUE_H

#define MAXSIZE 10
#define QueueEntry int

typedef struct queue{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXSIZE];
}Queue;

void CreateQueue(Queue *pq);
void Enqueue(Queue *pq,QueueEntry e);
int QueueFull(Queue *pq);
void Dequeue(Queue *pq,QueueEntry *pe);
int QueueEmpty(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);







#endif