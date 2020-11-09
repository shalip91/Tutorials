#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "myFunctions.h"


int main()
{
    // 4. Working With Numbers
   printf("%f\n", 5.0/4);
   printf("%d\n", 5/4);
   printf("%f\n", pow(2, 3)); //returns decimal number
   printf("%f\n", ceil(3.14)); //returns decimal number
   printf("%f\n", floor(3.14)); //returns decimal number

     // Prime Number
   int maxNum = 50;
   for (int i=2; i<=maxNum; i++)
       if (myIsPrime(i)) printf("%d is prime\n", i);
    return 0;

//     // 5. Constants
   const double PI = 3.14159265358979;
   printf("PI: %f\n", PI);


    return 0;
}
