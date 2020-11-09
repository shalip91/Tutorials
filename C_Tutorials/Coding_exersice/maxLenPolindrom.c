#include <stdio.h>
#define N 7

/*this exersice should include a matric N x N that contains polindroms 
in its diagonals (left down right up).
the function should return the length of the max pdolindrom */

int maxLenPolindrom(int mat[N][N]){
    
    int maxLen=1, tempLen;
    for(int i=1; i<N-1; i++){
        for(int len=1; (i-len)>=0; len++)
            if(mat[i+len][i-len] == mat[i-len][i+len])
                tempLen = 2*len+1;
        if(tempLen > maxLen) 
            maxLen = tempLen;
    }
    return maxLen;
}

int main(int argc, const char * argv[]){
    
    int mat[N][N] ={{1,0,3,0,1,0,1},
                    {0,2,0,4,0,2,0},
                    {3,0,3,0,3,0,1},
                    {0,4,0,4,0,1,0},
                    {2,0,3,0,5,0,1},
                    {0,3,0,1,0,6,0},
                    {4,0,2,0,1,0,7}};
    printf("\t\nThe max length of polindrom is: %d\n\n", maxLenPolindrom(mat));

    //  for(int i=1; i<argc; i++)
    //      printf("\tThe upper case of %c is %c\n", argv[i], upCase(argv[i]));
        
    return 0;
}
