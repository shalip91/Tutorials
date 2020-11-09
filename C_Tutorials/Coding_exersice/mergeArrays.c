#include <stdio.h>


void mergeArray(int *arr1, int *arr2, int *arr3 ,int n1, int n2){
	int i=0, j=0, k=0;
	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
            arr3[k] = arr1[i];
            k++; i++;
        }else{
            arr3[k] = arr2[j];
            k++; j++;  
        }
	}
    while(i<n1){
        arr3[k] = arr1[i];
        i++;k++;
        }
    while(j<n2){
        arr3[k] = arr2[j]; 
        j++;k++;
        }
}


int main(int argc, const char * argv[]){
    
    int arr1[] = {-1, 2, 3, 4, 5,11 }; 
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
  
    int arr2[] = {1, 3, 5, 5, 7,8,9,11}; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
  
    int arr3[n1+n2]; // option 1
    // int *arr3 =  malloc((n1 + n2)  * sizeof(int)); // option 2
    mergeArray(arr1, arr2, arr3, n1, n2);
    for(int i=0; i<n1+n2; i++)
        printf("%d ", arr3[i]);
  
    return 0;
}
