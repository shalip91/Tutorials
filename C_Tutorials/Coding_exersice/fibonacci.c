#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "myFunctions.h"
#define EMPTY_HT 99988


typedef struct{
    int value;
    int key;
}row;

void init_ht(row ht[], int size){
    for(int i=0; i<size; i++){
        ht[i].value = EMPTY_HT;
        ht[i].key = EMPTY_HT;
    }
}

void display_HT(row ht[], int size){

    printf("\nKey\tValue\n");
    for(int i=0; i<size; i++){
        if(ht[i].key != EMPTY_HT)
            printf("%d\t%d\n", ht[i].key, ht[i].value);
        else
            printf("---\t---\n");
    }
}

void insert_HT(row ht[], int key, int value){
    ht[key].value = value;
    ht[key].key = key;
}


// input is through terminal //
unsigned long long myFibonacci(unsigned long long num, row ht[]){

    if(ht[num].key != EMPTY_HT) 
        return ht[num].value;

    if(num == 1 || num == 0) 
        return 1;

    insert_HT(ht, num, myFibonacci(num-1, ht) + myFibonacci(num-2, ht));

    return myFibonacci(num-1, ht) + myFibonacci(num-2, ht);
}

int main(int argc, char* argv[]) {// input is through terminal //

    for(int i=1; i<argc; i++){
        row ht[myAtoi(argv[i])];
        init_ht(ht, myAtoi(argv[i]));
        printf("\nthe fibonacci up to the term: %s is %d\n", argv[i], myFibonacci(myAtoi(argv[i]), ht));
    }
    
    return 0;
}