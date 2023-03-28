#include <stdio.h>
#include "LinkedList.h"

void PrintListEntry(ListEntry data) {
    printf("%d ", data);
}

int main() {
    List list;
    ListEntry entry, entry2;
    
    // Create an empty list
    CreateList(&list);

    // Insert 3 elements to the list
    InsertList(0, 1, &list);
    InsertList(1, 2, &list);
    InsertList(2, 3, &list);
    // Print the list elements
    printf("List elements: ");
    TraverseList(&list, PrintListEntry);
    printf("\n");

    // Replace an element in the list
    ReplaceList(1, 4, &list);
    printf("List elements after replacement: ");
    TraverseList(&list, PrintListEntry);
    printf("\n");

    // Retrieve an element from the list
    RetrieveList(0, &entry, &list);
    printf("Retrieved element: %d\n", entry);

    // Delete an element from the list
    DeleteList(2, &entry2, &list);
    printf("Deleted element: %d\n", entry2);
    printf("List elements after deletion: ");
    TraverseList(&list, PrintListEntry);
    printf("\n");

    // Check if the list is full or empty
    printf("List is %s.\n", ListEmpty(&list) ? "empty" : "not empty");
    printf("List is %s.\n", ListFull(&list) ? "full" : "not full");

    // Destroy the list
    DestroyList(&list);

    return 0;
}

/*  Expected Output
    List elements: 1 2 3
List elements after replacement: 1 4 3
Retrieved element: 1
Deleted element: 3
List elements after deletion: 1 4
List is not empty.
List is not full.
*/