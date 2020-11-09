#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//general
void mySwap(int *x, int *y){
   
   int temp = *y;
   *y = *x;
   *x = temp;
}

//numbers
int myIsPrime(int num){
    for(int i = 2; i < sqrt(num) + 1; i++)
        if(! (num % i))
            return 0;
    return 1;
}

int myMod(int num, int mod){
    return num - mod*(num/mod); 
}

//strings
int myAtoi(char *str){ // located as "atoi" in #include <stdlib.h>

    int result = 0;
    int sign = 1;
    int i=0;

    if(str[0] == '-') {
        sign = -1;
        i++;
    }

    for(; str[i] != '\0'; i++)
        result = result*10 + str[i] - '0';

    return result*sign;
}

void myStrcat(char p[], char q[]) {
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

bool myStrcmp(char str1[], char str2[]) {
   
   int i = 0;
   //check's if the str1 is axactly the same as the start of str2
   for(i=0; str1[i] != '\0'; i++)
      if(str1[i] != str2[i]) return false;   
     
   // if str2 contious more than str1 than they are not the same
   if(str2[i] != '\0') return false;

   return true;
}

void myStrcpy(char a[], char b[]){
    int i;
    for (i=0 ; b[i] != '\0' ; ++i)
    a[i] = b[i];
}

int myStrlen(char *str){ // located as "strlen" in #include <stdlib.h>
    int i;
    for(i=0; str[i] != '\0'; i++);
    return i;
}

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

//search in array
int myLinearSearch(int *array, int size, int value){
for (int i = 0;  i < size;  i++)
    if (array[i] == value)
        return i;
return -1;
}

int myBinarySearch(int ar[], int size, int value){
    int low = 0, high = size-1, mid;

    while(low <= high){
        mid = (high + low)/2;
        if(ar[mid] < value)
            low = mid + 1;
        else if(ar[mid] > value)
            high = mid -1;
        else
            return mid;
    }
    return -1;
}

//array sorting
int myIndexOfMax(int ar[], int size){
    int index = 0;
    int max = ar[0];

    for(int i=1; i<size; i++){
        if(ar[i] > max){
            index = i;
            max = ar[i];
        }
    }
    return (ar[0] != ar[1]) ? index : -1;
}

void myMaxSort(int ar[], int size){
    int index;

    for(int len = size; len > 1; len--){
        index = myIndexOfMax(ar, len);
        if(index == -1) return; // meaning the values are the same
        if(index < (len-1))
            mySwap(&ar[index], &ar[len-1]);
    }
}