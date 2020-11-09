/* Example using strcpy by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




void mystrcpyP(char *a, char *b){
    int i;
    for (i=0 ; b[i] != '\0' ; ++i)
    a[i] = b[i];
    return 0;
}

void mystrcpy(char a[], char b[]){
    int i;
    for (i=0 ; b[i] != '\0' ; ++i)
    a[i] = b[i];
    return 0;
}


int main(int argc, const char * argv[])
{
    /* Create an example variable capable of holding 50 characters */
    char example[50];

    /* Copy the string "this is a copied string" into the example variable */
    mystrcpy(example, "this is a copied string");

    /* Display the contents of the example variable to the screen */
    printf("%s\n", example);

    return 0;
}
