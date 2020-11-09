#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> 




int main()
{
    // Random number
    srand(time(NULL));
    for(int i=0; i<10; i++){
        int randomNumber = rand() % 100 + 1; //between 1-5
        printf("The number is: %d\n", randomNumber);
    }
    getch();
    return 0;
}

