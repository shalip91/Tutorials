#include <stdio.h>
#include <math.h>
#include <conio.h> 

void oppString(char *shaliString) {
    int len=0;
    while(*shaliString != '\0'){
        len++;
        shaliString++;
    }
    printf("The length of your String is: %d\n",len);
    char oppStr[50];
    shaliString-=1;
    for(int i=0;i<len;i++){
        oppStr[i]= *(shaliString-i);
    }
    printf("The opposite string is: %s\n", oppStr);
}

int main(){
    char str[50];
    printf("Enter your string shali:\n");
    scanf(" %s", str);
    oppString(str);
    printf("\n\t\tYou are gae!\n");
    getch();
    return 0;
    
}