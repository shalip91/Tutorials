#include <stdio.h>
#include <stdlib.h>



// Struct
typedef struct {
    int value;
    struct node* next;
}node_t;
// typedef struct node node_t;  // it is possible to write like this allso.

void printlist(node_t *head){
    node_t *temporary = head;
    
    while(temporary != NULL){
        printf("%d ", temporary->value);
        temporary = temporary->next;
    }
    printf("\n");
}



int main()
{
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 1;
    n2.value = 2;
    n3.value = 3;

    //link them up
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    //adding a new node
    node_t n4;
    n4.value = 5;
    n4.next = &n2;
    n1.next = &n4;
    
    // printf("%d", head);
    printlist(head);
    return 0;
}
