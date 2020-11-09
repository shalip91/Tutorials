#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // Writing to files
   FILE * fpointer = fopen("employees.txt", "w");
   fprintf(fpointer, "\nTali, Krendel");
   fclose(fpointer);


    // Read files
   char line[255];
   FILE * fpointer = fopen("employees.txt", "r");
   fgets(line, 255, fpointer);
   printf("%s", line);
  fclose(fpointer);

    return 0;
}
