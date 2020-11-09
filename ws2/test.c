#include <stdio.h>

void foo (char *arr)
{
    printf("in funxtion %lu", sizeof(arr));
}

int main ()
{
    char arr[] = {'a'}; // this is an array, in the stack.
    char *arr2 = "ab";  //size 8 (of pointer)

    printf("%lu %lu\n", sizeof(arr), sizeof(arr2));
    foo(arr);


    // int *p = (int *) 17;
    // printf("%d", (int)(p+4));

}