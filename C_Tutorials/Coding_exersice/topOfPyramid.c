#include <stdio.h>
#define N 2
#define M 3


int topOfPyramid(unsigned int num){

    int right=num%10, left=(num%100)/10, top, posGrad = 1;

    //check's if the pyramid start's with a positive gradient
    if(left <= right) return 0;
    
    while(num>1){
        right = num%10;
        num = num/10;
        left = num%10;

        if(posGrad){
            if(left>right)
                top = left;
            else if(left<right)
                posGrad = 0;
            else
                return 0;
        }else if(left>=right)
            return 0; 
    }
    return top;
}

int pyramidRidge(unsigned int a[N][M]){

    int maxRow=0, maxPyramid = 0;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(!topOfPyramid(a[i][j])) 
                return 0;
            maxRow = maxRow<topOfPyramid(a[i][j]) ? topOfPyramid(a[i][j]) : maxRow;
        }
        if(!maxPyramid)
            maxPyramid = maxRow;
        else if(maxPyramid != maxRow)
            return 0;
    }
    return maxPyramid;
}


int main(int argc, const char * argv[]){
  
    unsigned int mat[N][M] = {{12432,1232,4821},
                              {128765,4565,676}};
                              
    if(pyramidRidge(mat))
        printf("\n\nthis is a pyramid ridge with the peak: %d\n\n", pyramidRidge(mat));
    else
        printf("\n\nthis is not a ridge pyramid\n\n"); 
  
    return 0;
}
