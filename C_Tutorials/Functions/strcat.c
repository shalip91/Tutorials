/* Example using strcpy by TechOnTheNet.com */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myFunctions.h"

void mystrcat(char p[], char q[]) {
   int c=0, d=0;
   while (p[c] != '\0') {
      c++;      
   }

   while (q[d] != '\0') {
      p[c] = q[d];
      d++;
      c++;    
   }
   p[c] = '\0';
}

void mystrcatP(char *original, char *add)
{
   while(*original)
      original++;
     
   while(*add)
   {
      *original = *add;
      add++;
      original++;
   }
   *original = '\0';
}

int main(int argc, const char * argv[]){
    
    char left[]="shali";

    char right[] = " Persy";
    myStrcat(left, right);
    printf("\n%s\n", left); 
    printf("size of the conactenate string is: %d\n\n", sizeof(left));   
    return 0;
}
