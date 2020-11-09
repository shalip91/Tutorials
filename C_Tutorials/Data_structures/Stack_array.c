#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY 3219684

typedef struct {
    int value[STACK_LENGTH];
    int top;
} stack; 


bool push(stack * mystack, int value){
    if(mystack->top >= STACK_LENGTH-1) return false;

    mystack->top++;
    mystack->value[mystack->top] = value;
    return true;
}

int pop(stack * mystack){
    if(mystack->top == EMPTY) return STACK_EMPTY;
    int result = mystack->value[mystack->top];
    mystack->top--;
    return result;
}

int main()
{
    stack s1;
    s1.top = EMPTY;
    stack s2;
    s2.top = EMPTY;
    stack s3;
    s3.top = EMPTY;

    push(&s2, 1);
    push(&s2, 2);
    push(&s2, 3);
    push(&s2, 4);

    int t;
    while((t = pop(&s2)) != STACK_EMPTY){
        printf("%d - ", t);
    }
    printf("\n");
    return 0;
}
