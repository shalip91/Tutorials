#include <stdio.h>

/*pangram is a sintanse/word that contains the intire alphabeth. */

char upCase(char c){
   if(c>='a' && c<='z')
      return c + ('A'-'a');
   return c;
}

int myStrlen(char *str){ // located as "strlen" in #include <stdlib.h>
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
} 

int isPangram(char *str){ 
   int histogram['z'-'a'+1]={0};
   
   //filling the histogram
   for(int i=0; str[i] != '\0'; i++)
      if(upCase(str[i]) >='A' && upCase(str[i]) <='Z')
         histogram[upCase(str[i]) - 'A'] = 1;
   
   //checks for empty slots meaning the char is missing.
   for(int i=0; i<('z'-'a'+1); i++)
      if(!histogram[i]) return 0;
   return 1;
   
}

int main(int argc, const char * argv[]){
    
   char str[] = "The five boxIng wizaDs jump Quickly";
   printf("\tThe string: \"%s\" is %d\n", str, isPangram(str));

   //  for(int i=1; i<argc; i++)
   //      printf("\tThe upper case of %c is %c\n", argv[i], upCase(argv[i]));
     
    return 0;
}
