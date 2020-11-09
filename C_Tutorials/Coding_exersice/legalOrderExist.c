#include <stdio.h>


void strangeOrder (int source[], int target[], int size){

    // int midIndex = (size%2)?(size/2 -1):(size/2 - 1);
     for(int i=0; i<=(size/2 -1); i++){
        target[i] = source[i*2];
        target[size-1-i] = source[i*2+1];
        printf(" index i: %d\t index size-i-1: %d\t target i: %d\t targe size-i-1: %d \n", i, size-1-i, target[i],  target[size-1-i]);
     }
    if(size%2) 
        target[size/2] = source[size-1];
}



int main(int argc, const char * argv[]){
    int size = 11;
    int source[] = {99,54,45,44,30,23,21,18,15,3,1};
    int target[11] ={0};

    strangeOrder (source, target, size);

    printf("\n");
    for(int i=0; i<size; i++)
        printf(" %d", target[i]);
  
    return 0;
}
