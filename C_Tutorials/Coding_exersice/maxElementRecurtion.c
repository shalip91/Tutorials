#include <stdio.h>


// int maxElementIndex(int *a, int n){
//     int iMax;
//     if(n==1) 
//         return 0;
//     iMax = maxElementIndex(a, n-1);
//     return a[iMax]>a[n-1] ? iMax : n-1;
// }
int myMod(int num, int mod){
    return num - mod*(num/mod); 
}

int rotateArray(int a[], int size, int n){

	n = mod(n, size);
	int *temp = malloc(n * sizeof(int)); 
	for(int i=0; i<n; i++)
	    temp[i] = a[size-n+i];

	for(int i=size-n-1; i>=0; i--)
		a[i+n] = a[i];

    for(int i=0; i<n; i++)
        a[i] = temp[i];
}

  

int main(int argc, const char * argv[]){
    
    int array[] = {1,2,3,1,884,5, 2,42};
    
    printf("\nThe max value's index is: %d\n", rotateArray(array, 8, 2));
  
    return 0;
}
