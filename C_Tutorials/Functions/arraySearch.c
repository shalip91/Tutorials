#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>


int linear_search(int *array, int size, int value){
for (int i = 0;  i < size;  i++)
    if (array[i] == value)
        return i;
return -1;
}

int binary_search(int ar[], int size, int value){
    int low = 0, high = size-1, mid;

    while(low <= high){
        mid = (high + low)/2;
        if(ar[mid] < value)
            low = mid + 1;
        else if(ar[mid] > value)
            high = mid -1;
        else
            return mid;
    }
    return -1;
}

int main(){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("%d", binary_search(array, 8, 5));
}