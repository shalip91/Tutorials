#include <stdio.h>
#include "myFunctions.h"
#define N 7

/*this exersice swap lines in matrix:
the firth with the last, the second with the one before last, etc,. */

void UpDownMat(int mat[N][N]){
    
    for(int i=0; i<N/2+1; i++)
        for(int j=0; j<N; j++)
            mySwap(&mat[i][j], &mat[N-1-i][j]);
}

int main(int argc, const char * argv[]){
    
    int mat[N][N] ={{1,0,3,0,1,0,1},
                    {0,2,0,4,0,2,0},
                    {3,0,3,0,3,0,1},
                    {0,4,0,4,0,1,0},
                    {2,0,3,0,5,0,1},
                    {0,3,0,1,0,6,0},
                    {4,0,2,0,1,0,7}};

    printf("\noriginal matrix:\n");
    for(int i=0; i<N; i++){
       for(int j=0; j<N; j++){
           printf("%d,", mat[i][j]);
       }
       printf("\n");
   }
   
   UpDownMat(mat);

    printf("\nswaped lines matrix:\n");
    for(int i=0; i<N; i++){
       for(int j=0; j<N; j++){
           printf("%d,", mat[i][j]);
       }
       printf("\n");
   }
        
    return 0;
}
