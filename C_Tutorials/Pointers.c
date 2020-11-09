#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    //Poiners & Dereferance a pointer
   int user_age = 30;
   int *pUser_age = &user_age; // stors the memory address of the variable
   char user_name[] = "Shali Persy";
   char *pUser_name = &user_name;

   (*pUser_age)++; // the () is in order to increase the value and not the address

   printf("%p\n%p\n%d\n%d", pUser_age, &user_name, *pUser_age, *&user_age);

    return 0;
}

//pointer for matrix
// (*mat)[N] == *(*(mat+i)+j)
 