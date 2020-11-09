#include <stdio.h>
#include <stdlib.h>


/* this script should be executed via terminal
 "./a.out" followed by various inputs*/

int main(int argc, char* argv[]){

    int sum = 0;
    printf("\nargc = %d\n", argc);
    printf("Let's see what is in argv[]:\n");
    if (-1)
        for(int i=1; i<argc; i++){
            printf("\targv[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }
    printf("The total sum of these numbers is: %d\n\n", sum);
    return 0;  
}

