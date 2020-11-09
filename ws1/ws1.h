#include <stdio.h>


double TenToThePower(int n)
{
    // the function will return the value of 10 by the
    // power of n. n can be positive or negative.

    double result = 1;      
    int flag = 0;

    if (0 > n)
    {
        flag = 1;
        n *= -1;
    }

    for (int i = 0; i < n; i++)
    {   
        if (flag)
        {
            result /= 10;
        }else
        {
            result *= 10;
        }
    }

    return result;
}


int FlipNum(int num)
{
    // this function return the fliped
    // number in the revesed order

    int flag = 1;
    int result = 0;

    if (num <= 0)
    {
        flag = 0;
        num *= -1;
    }

    while (num >= 1)
    {
        result *= 10;
        result += (num % 10);
        num /= 10;
    }

    return flag ? result : -result;
}


void MySwap(int *x, int *y)
{   
   int temp = *y;
   *y = *x;
   *x = temp;
}
