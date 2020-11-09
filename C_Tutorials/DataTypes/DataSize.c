#include<stdio.h>
int main() {

    char charType;   // 256
    short shortType; // 65536
    int intType;     // 4,294,967,296
    float floatType; //
    double doubleType;
    unsigned long longLongType;
    long double longDoubleType;
    
    


    // sizeof evaluates the size of a variable
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of short: %zu bytes\n", sizeof(shortType));
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of longLong: %zu bytes\n", sizeof(longLongType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of longDouble: %zu bytes\n", sizeof(longDoubleType));

    
    return 0;
}