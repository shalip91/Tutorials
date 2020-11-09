#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN


typedef struct node{
    int value;
    struct node *next;
}node;

typedef node * stack;


bool push(stack * myStack, int value){
    node *newnode = malloc(sizeof(node));
    if(newnode == NULL) return false;

    newnode->value = value;
    newnode->next = (*myStack);
    *myStack = newnode;
    return true;
}

int pop(stack *mystack){
    if(*mystack == NULL) return STACK_EMPTY;
    
    int result = (*mystack)->value;
    node *tmp = *mystack;
    *mystack = (*mystack)->next;
    free(tmp);
    
    return result;
}

int main()
{
    stack s1=NULL, s2=NULL, s3=NULL;

    push(&s1, 12);
    push(&s1, 121);
    push(&s1, 1211);
    push(&s1, 12111);

    int t;
    while((t = pop(&s1)) != STACK_EMPTY){
        printf("%d ", t);
    }

    return 0;
}
