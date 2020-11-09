#include <stdio.h>
#include <stdlib.h>


/* this script should be executed via terminal
 "./a.out" followed by various inputs*/

int strlenV1(char str[]){ // located as "strlen" in #include <stdlib.h>
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
}

int strlenV2(char *str){ // located as "strlen" in #include <stdlib.h>
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
}

int strlenP(char *str){
    int i;
    for(i = 0; *(str + i); i++);
    return i;
}


int main(int argc, char* argv[]){

    for(int i=1; i<argc; i++){
        printf("\tThe lenght of the %dth string: %s is: %d\n", i, argv[i], strlenP(argv[i]));
    }

    return 0;  
}   