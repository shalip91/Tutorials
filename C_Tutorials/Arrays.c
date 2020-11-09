#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  

    // 7. arrays
   int luckyNumbers[] = {-4, 7, 8, 15, 24 ,49};
   int found[20]={0}; //creats an array of zeroes
   printf("luckyNumbers: %d\n", luckyNumbers[0]);
   luckyNumbers[2] = 44;
   printf("luckyNumbers: %d\n", luckyNumbers[2]);


    // 2D array
   int i, j;
   int nums[][2] = {{2,3},
                   {4,5},
                   {1,99}};
   for(i=0; i<3; i++){
       for(j=0; j<2; j++){
           printf("%d,", nums[i][j]);
       }
       printf("\n");
   }

    // passing 2D array to a function

    //int maxLenPolindrom(int mat[N][N]) //first option
    //int maxLenPolindrom(int (*mat)[N]) //second option

    // (*mat)[N] == *(*(mat+i)+j)


    return 0;
}
