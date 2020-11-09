#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "myFunctions.h"

/* this script should be executed via terminal
 "./a.out" followed by various inputs*/

//{1, 4, 6, 3, 4} len = 5


void myBubleSort(int ar[], int size){
    int swaped = 0;
    for(int len=size; len>1; len--){
        for(int i=0; i<(len-1); i++)
            if(ar[i]>ar[i+1])
                mySwap(&ar[i], &ar[i+1]);
    }
}

int main(int argc, char *argv[]){// via terminal
    int array[argc-1];
    int size = argc-1;

    // setting the inputs into the array
    for(int i=0; i<(argc-1); i++)
        array[i] = myAtoi(argv[i+1]);

    // int array[] = {0, 5, 4, 1};
    // int size = 4;
    
    // printing the array as it is
    printf("\nthe array is:\n");
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    //sorting the array
    myBubleSort(array, size);
    printf("the sorted array is:\n");
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
    return 0;
}