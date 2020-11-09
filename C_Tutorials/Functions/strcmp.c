/* Example using strcpy by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


bool mystrcmp(char str1[], char str2[]) {
   
   int i = 0;
   //check's if the str1 is axactly the same as the start of str2
   for(i=0; str1[i] != '\0'; i++)
      if(str1[i] != str2[i]) return false;   
     
   // if str2 contious more than str1 than they are not the same
   if(str2[i] != '\0') return false;

   return true;
}



bool mystrcmpP(char *original, char *add){

   for(;*original != '\0'; *original++)
      if(*original != *(add++)) return false;
   
   if(*add != '\0') return false;

   return true;
}

int main(int argc, const char * argv[]){
    
    char str1[] = "shali";
    char str2[] = "shali";

    if(mystrcmpP(str1, str2))
       printf("\nthe strings are the same!\n\n");
    else
       printf("\nthey are different!  %d\n\n");
    

    return 0;
}
