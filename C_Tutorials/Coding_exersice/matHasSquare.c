#include <stdio.h>
#define M 5

int min(int a, int b){
    return (a<b)?a:b;
}

int hasSquare(int mat[][M], int rows){

    for(int i=0; i<rows; i++)
        for(int j=0; j<M; j++)
            for(int k=1; k<=min(rows, M); k++)
                if(mat[i][j]==mat[i][j+k] 
                && mat[i][j+k]==mat[i+k][j] 
                && mat[i+k][j]==mat[i+k][j+k])
                    return k;
    return 0;
}

int main(int argc, const char * argv[]){
    
    int rows = 6;
    int mat[][M]= {{4,4,3,2,5},
                    {4,3,0,3,3},
                    {0,2,0,0,0},
                    {9,3,7,3,0},
                    {0,3,2,1,3},
                    {0,1,0,6,4}};

    
    printf("\noriginal matrix:\n");
    for(int i=0; i<rows; i++){
       for(int j=0; j<M; j++){
           printf("%d,", mat[i][j]);
       }
       printf("\n");
   }

    if(hasSquare(mat, rows))
            printf("\nthe matrix has a square with size: \"%d\"\n\n", hasSquare(mat, rows));
        else
            printf("\n\nthe matrix dont have square\n\n");
            
    return 0;
}
