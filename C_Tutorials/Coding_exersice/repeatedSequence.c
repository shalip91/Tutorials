#include <stdio.h>

char upCase(char c){
    if(c>='a' && c<='z')
        return c + ('A'-'a');
    return c;
}

char strlen(char *str){
    int i;
    for(i=0; str[i]!='\0'; i++);
    return i;
}

char strcmp(char *str1, char *str2){
    int len = strlen(str1);
    for(int i=0; i<len; i++)
        if(upCase(str1[i]) != upCase(str2[i]))
            return 0;
    return 1;
}

int max(int a, int b){
    return (a<b)?b:a;
}

int min(int a, int b){
    return (a>b)?b:a;
}

int repeatedSequence(char *str1, char *str2){

    int minLen = strlen(str2);
    int maxLen = strlen(str1);

    if(maxLen % minLen)
        return 0;

    for(int i=0; i<maxLen; i+=minLen){
        if(strlen(str1)<strlen(str2))
            if(!strcmp(str1, str2+i))
                return 0;
        else
            if(!strcmp(str2, str1+i))
                return 0;
    }

    return 1;
}

int main(int argc, const char * argv[]){
    
    char str1[] = "123S $123S $123S $";
    char str2[] = "123s $";

    
    printf("\nthe length of str1: %d\nthe length of str1: %d\n\n", strlen(str1), strlen(str2));
    printf("the min length is: %d\nthe max length is: %d\n", min(strlen(str1), max(strlen(str1), strlen(str2))), strlen(str2));

    if(repeatedSequence(str1, str2))
        printf("\nthey are repeated strings of: \"%s\"\n\n", str2);
    else
        printf("\n\nthey are not repeated strings !\n\n");
        
    return 0;
}
