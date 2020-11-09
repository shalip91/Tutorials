#include <stdio.h>
#define N 7

/*this exersice should include a matric N x N that contains polindroms 
in its diagonals (left down right up).
the function should return the length of the max pdolindrom */

int IsBasedPolindrom(int mat[N][N]){
    
    int mid = N/2;
    for(int i=1; i<=N/2; i++)
        if(mat[mid-i][mid+i] != mat[mid+i][mid-i] || mat[mid+i][mid+i] != mat[mid-i][mid-i])
            return 0;
    return 1;
}

int main(int argc, const char * argv[]){

    int mat[][N] ={{1,0,3,0,1,0,1},
                    {0,2,0,4,0,2,0},
                    {3,0,3,0,3,0,1},
                    {0,4,0,8,0,1,0},
                    {2,0,3,0,3,0,1},
                    {0,2,0,1,0,2,0},
                    {1,0,2,0,1,0,1}};

    if(!IsBasedPolindrom(mat))
        printf("the mat is not based polindrom\n");
    else
        printf("the mat is based polindrom\n");
        
    return 0;
}
