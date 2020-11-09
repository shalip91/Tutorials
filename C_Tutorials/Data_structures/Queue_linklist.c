#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define QUEUE_EMPTY INT_MIN


typedef struct node{
    int value;
    struct node *next;
}node;

typedef struct {
    node *head;
    node *tail;
}queue;

void init_queue(queue *q){
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *q, int value){
    //create a new node.
    node * newnode = malloc(sizeof(node));
    if(newnode == NULL) return false; //not enoght memory returns NULL

    newnode->value = value;
    newnode->next = NULL;

    //if there is a tail, connect that tail to this new node.
    if(q->tail != NULL) {
        q->tail->next = newnode;
    }
    q->tail = newnode;    

    //make sure the head makes sense.
    if(q->head == NULL){
        q->head = newnode;
    }
    return true;
}

int dequeue(queue *q){
    // check to see if the queue is empty.
    if(q->head == NULL) return QUEUE_EMPTY;

    //save the result we're going to return.
    int result = q->head->value;
    q->head = q->head->next;
    if(q->head == NULL) {
        q->tail = NULL; //make sure to free the tail.
    }

    return result;
}

int main()
{
    queue q1, q2, q3;

    init_queue(&q1);
    init_queue(&q2);
    init_queue(&q3);

    enqueue(&q1, 1);
    enqueue(&q1, 2);
    enqueue(&q1, 3);
    enqueue(&q1, 4);
        
    int t;
    while((t = dequeue(&q1)) != QUEUE_EMPTY){
        printf("%d - ", t);
    }
    printf("\n");
    return 0;
}
