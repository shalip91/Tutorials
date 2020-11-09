#include <stdio.h>
#define N 12

/*this function rerurn true if the ar[i]=ar[i-k]+a[i-k+1]+...+a[i-1] */

int isMegaFibonacci(int ar[], int k);
int getMegaFibonacciOrder(int a[]);


int main(int argc, const char * argv[]){
    
    int ar[N] ={0,1,1,2,3,5,8,13,21,34,55,89};
    if(isMegaFibonacci(ar, 2))
        printf("\n\nthe array is a mega fibonacci at the order : %d\n\n", getMegaFibonacciOrder(ar));
    else
        printf("\n\nthe array is not a mega fibonacci\n\n");
        
        
    return 0;
}


int isMegaFibonacci(int ar[], int k){
    int sum = 0;
    for(int i=k; i<N; i++){
        sum = 0;
        for(int j=k; j>0; j--)
            sum += ar[i-j];
        if(sum!=ar[i]) return 0;
    }
    return 1;
}

int getMegaFibonacciOrder(int a[]){
    for(int i=1; i<N; i++)
        if(isMegaFibonacci(a, i))
            return i;
    return -1;
}