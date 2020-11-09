#include "myFunctions.h"

void myReverseStr(char *str){
    int len = myStrlen(str);
    char temp;
    for(int i=0; i<len/2; i++){
        temp = *(str + i);
        *(str + i) = *(str + len -1 - i);
        *(str + len -1 - i) = temp;
    }
}

void myReverseStrP(char *str){
    int len = myStrlen(str);
    char temp;
    for(int i=0; i<len/2; i++){
        temp = str[i];
        str[i] = str[len -1 - i];
        str[len -1 - i] = temp;
    }
}

int main(int argc, const char * argv[])
{
    char example[] = "shali";
    myReverseStr(example);
    printf("%s\n", example);

    return 0;
}
