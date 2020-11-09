#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
// #include "myFunctions.h"



int main(int argc, char *argv[]){
    
    char *s1 = "shali";
    char * const s2 = "oz";
    

    for (int i = 0; i < 20; i++){
        printf("%c ", *++s1);

    }


    return 0;
}
