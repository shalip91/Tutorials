#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "myFunctions.h"

/* this script should be executed via terminal
 "./a.out" followed by various inputs*/

int index_of_max(int ar[], int size){
    int index = 0;
    int max = ar[0];

    for(int i=1; i<size; i++){
        if(ar[i] > max){
            index = i;
            max = ar[i];
        }
    }
    return (ar[0] != ar[1]) ? index : -1;
}

void max_sort(int ar[], int size){
    int index;

    for(int len = size; len > 1; len--){
        index = index_of_max(ar, len);
        if(index == -1) return; // meaning the values are the same
        if(index < (len-1))
            mySwap(&ar[index], &ar[len-1]);
    }
}

int main(int argc, char *argv[]){// via terminal
    int array[argc-1];
    int size = argc-1;

    // setting the inputs into the array
    for(int i=0; i<(argc-1); i++)
        array[i] = myAtoi(argv[i+1]);
    
    // printing the array as it is
    printf("\nthe array is:\n");
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    int max_index = index_of_max(array, size);
    printf("\nthe array size is: %d\nthe max value is %d \nindex is %d\n\n", argc-1, array[max_index], max_index);
    
    max_sort(array, size);
    printf("the sorted array is:\n");
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
    return 0;
}