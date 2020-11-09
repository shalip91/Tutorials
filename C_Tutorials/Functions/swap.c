#include <stdio.h>

void mySwap(int *x, int *y){
   
   int temp = *y;
   *y = *x;
   *x = temp;
}



int main(int argc, const char * argv[]){
    
   char x = 10;
   char y = 20;

   mySwap(&x, &y);
   printf("\nx: %d\ny: %d\n", x, y);

   return 0;
}
