#include <stdio.h>
#include "Stack.h"

int main() {
    Stack s;
    StackEntry e;

    CreateStack(&s);
    printf("Stack size: %d\n", StackSize(&s));
    printf("Stack empty? %d\n", StackEmpty(&s));
    printf("Stack full? %d\n", StackFull(&s));

    Push(&s, 10);
    printf("Stack size: %d\n", StackSize(&s));
    printf("Stack empty? %d\n", StackEmpty(&s));
    printf("Stack full? %d\n", StackFull(&s));

    Push(&s, 20);
    Push(&s, 30);
    Push(&s, 40);
    Push(&s, 50);
    printf("Stack size: %d\n", StackSize(&s));
    printf("Stack empty? %d\n", StackEmpty(&s));
    printf("Stack full? %d\n", StackFull(&s));

    StackTop(&s, &e);
    printf("Top element: %d\n", e);

    Pop(&s, &e);
    printf("Popped element: %d\n", e);
    printf("Stack size: %d\n", StackSize(&s));

    ClearStack(&s);
    printf("Stack size: %d\n", StackSize(&s));
    printf("Stack empty? %d\n", StackEmpty(&s));

    return 0;
}


/*The output should be:

Stack size: 0
Stack empty? 1
Stack full? 0
Stack size: 1
Stack empty? 0
Stack full? 0
Stack size: 5
Stack empty? 0
Stack full? 1
Top element: 50
Popped element: 50
Stack size: 4
Stack size: 0
Stack empty? 1

*/