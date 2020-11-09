#include <stdio.h>
#include <stdlib.h>


/* this script should be executed via terminal
 "./a.out" followed by various inputs*/


int myAtoi(char *str){ // located as "atoi" in #include <stdlib.h>

    int result = 0;
    int sign = 1;
    int i=0;

    if(str[0] == '-') {
        sign = -1;
        i++;
    }

    for(; str[i] != '\0'; i++)
        result = result*10 + str[i] - '0';

    return result*sign;
}


int main(int argc, char* argv[]){

    int sum = 0;
    printf("argc = %d\n", argc);
    printf("Let's see what is in argv[]:\n");

    for(int i=1; i<argc; i++){
        printf("\targv[%d] = %s\n", i, argv[i]);
        sum += myAtoi(argv[i]);
    }
    printf("The total sum of these numbers is: %d\n", sum);
    return 0;  
}