#include<stdio.h>
#include<string.h>
int factorial(int );

int main()
{

    int sal;
    char name[30], designation[30], info[60];

    printf("Enter your name: ");
    gets(name);

    printf("Enter your designation: ");
    gets(designation);

    printf("Enter your salary: ");
    scanf("%d", &sal);

    sprintf(info, "Welcome %s !\nName: %s \nDesignation: %s\nSalary: %d",
        name, name, designation, sal);

    printf("\n%s", info);

    // signal to operating system program ran fine
    return 0;
}