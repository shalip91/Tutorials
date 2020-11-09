#include <stdio.h>

/* this function return the max value of the expretion:
|A[i]-A[j]|+|i-j| */


int max(int a, int b){
return a>b?a:b;
}

int min(int a, int b){
return a<b?a:b;
}

int findMaxInArr(int a[], int n){ // my solution
   int form1Max = -100000, form1Min = 100000;
    int form2Max = -100000, form2Min = 100000;
    int i, maxRes;
    for(i=0;i<n;++i){
        form1Max = max(form1Max, a[i]+i);
        form1Min = min(form1Min, a[i]+i);
        form2Max = max(form2Max, a[i]-i);
        form2Min = min(form2Min, a[i]-i);
    }
 
    maxRes = max(form1Max - form1Min, form2Max - form2Min);
    return maxRes;
}





int main(int argc, char* argv[]) {// input is through terminal //
    
    int ar[] = {1,1,1,1};
    printf("\n\n%d\n\n", findMaxInArr(ar, 4));
    return 0;
}