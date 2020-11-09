#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


// static global variables
    // they are live even wheb the function ends
    static int global_static_x = 20;

int main()
{

    // static variables
    // they are live even wheb the function ends
    static int x = 20;

    //2. DataTypes
   _Bool shaliIsFat = 1;
   bool shaliIsFat2 = false;
   int age2 = 49;
   float pi = M_PI;
   char letter = '5';
   char string[] = "String";
   //int cats CATS cAts" "CAts" are not the same


   // DataCasting
   int slices = 17;
   int people = 2;
   double halfThePizza1 = slices / people;
   double halfThePizza2 = (double) slices / people;
   printf("%f\n%f\n", halfThePizza1, halfThePizza2);
   printf("%d", letter - '0');
    return 0;
}
 