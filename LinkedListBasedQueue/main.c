#include <stdio.h>
#include "Queue.h"

int main() {
    Queue q;
    QueueEntry e;

    CreateQueue(&q);

    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Enqueue(&q, 40);
    Enqueue(&q, 50);

    printf("Queue size: %d\n", QueueSize(&q));

    while (!QueueEmpty(&q)) {
        Dequeue(&q, &e);
        printf("Dequeued element: %d\n", e);
    }

    printf("Queue size: %d\n", QueueSize(&q));

    ClearQueue(&q);

    Enqueue(&q, 60);
    Enqueue(&q, 70);

    printf("Queue size: %d\n", QueueSize(&q));

    while (!QueueEmpty(&q)) {
        Dequeue(&q, &e);
        printf("Dequeued element: %d\n", e);
    }

    printf("Queue size: %d\n", QueueSize(&q));

    return 0;
}


/*The output of this program should be:

Queue size: 5
Dequeued element: 10
Dequeued element: 20
Dequeued element: 30
Dequeued element: 40
Dequeued element: 50
Queue size: 0
Queue size: 2
Dequeued element: 60
Dequeued element: 70
Queue size: 0
*/