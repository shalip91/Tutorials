#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define TABLE_SIZE 10

typedef struct{
    int value;
    int key;
}row;

void init_ht(row ht[], int size){
    for(int i=0; i<size; i++){
        ht[i].value = NULL;
        ht[i].key = NULL;
    }
}

void display_HT(row ht[], int size){

    printf("\nKey\tValue\n");
    for(int i=0; i<size; i++){
        if(ht[i].key != NULL)
            printf("%d\t%d\n", ht[i].key, ht[i].value);
        else
            printf("---\t---\n");
    }
}

void insert_HT(row ht[], int key, int value, int size){
    ht[key].value = value;
    ht[key].key = key;
}



int main (){

    int temp;
    row ht[TABLE_SIZE];
    init_ht(ht, TABLE_SIZE);
    

    insert_HT(ht, 1, 1,TABLE_SIZE);
    insert_HT(ht, 2, 3,TABLE_SIZE);
    insert_HT(ht, 3, 4,TABLE_SIZE);
    insert_HT(ht, 4, 7,TABLE_SIZE);
    insert_HT(ht, 5, 11,TABLE_SIZE);
    insert_HT(ht, 6, 18,TABLE_SIZE);
    insert_HT(ht, 7, 29,TABLE_SIZE);

    display_HT(ht, TABLE_SIZE);

    int key = 7;
    printf("\n\nthe value of the key: %d is %d", key, ht[key]);


}

