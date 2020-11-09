#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // Switch - only ints
   int x, flag = 1;
   while(flag){

       char grade;

       printf("enter a grade: ");
       scanf("%d", &x);
       printf("enter a grssssade: ");

       /* you can ether getchar() or just put space before the - %c */
       /* getchar(); */

       scanf(" %c", &grade);

       switch(grade){
           case 'A':
               printf("good!\n");
               flag = 0;
               break;
           default:
               printf("invalid grade\n\n");
       }
   }
    return 0;
}
