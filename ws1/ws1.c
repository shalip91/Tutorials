#include <stdio.h>
#include "ws1.h"




int main ()
{   
    // Q4
    //hexadecimal print of Hello World!
    printf("\nQ4\n%c%c%c%c%c %c%c%c%c%c%c\n", 
    0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x57, 0x6F, 0x72, 0x6C, 0x64, 0x21 );


    // Q5
    //raising 10 to the power of n
    printf("\nQ5\nthe 10^n = %f\n", TenToThePower(2));


    // Q6
    //fliping number for example - 1234 -> 4321
    printf("\nQ6\nThe fliped num of %d is: %d\n\n", -12340, FlipNum(-12340));


    // Q7
    // swaping between 2 variables values.
    int x = 5;
    int y = 7;
    
    MySwap(&x, &y);
    printf("Q7\nthe values after swap are: x = %d, y = %d\n\n", x, y);
    
    return 0;
}

