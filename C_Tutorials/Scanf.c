#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // 6. scanf
   int age3;
   double gpa;
   printf("Enter your age: \n");
   scanf("%d", &age3);
   printf("you are %d years old \n", age3);

   printf("Enter your gpa: \n");
   scanf("%lf", &gpa);
   printf("your gpa is: %.1f\n", gpa);

   char name2[20];
   printf("Enter your name: \n");
   scanf("%19s", name2);
//    fgets(name2, 20, stdin); //lets us input more then 1 words
   printf("your name is: %s\n", name2);

    return 0;
}
