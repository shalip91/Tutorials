#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>





int main()
{
    // 1. Variables
  char name[] = "Shali";
  int age = 28;
  printf("heeeey my name is %s, and i'm %d years old\n", name, age);
  age = 58;
  printf("hey my name is %s, and i'm %d years old\n", name, age);

    // Prime Number
   int maxNum = 50000;
   for (int i=2; i<=maxNum; i++)
       if (isPrime(i)) printf("%d is prime\n", i);
    return 0;
}
