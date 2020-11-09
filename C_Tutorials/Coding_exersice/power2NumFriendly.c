#include <stdio.h>

/* this a recurtion implementation of returning 2 by the power 
of the numbers that divid their neibours with out remiander */


int myPower2NumFriendly(int *a, int n){ // my solution
    if(n<3) 
        return 1;

    if((a[n-1]%a[n-2]) == 0 && (a[n-3]%a[n-2])==0)
        return 2*power2NumFriendly(a, n-1);

    return 1*power2NumFriendly(a, n-1);
}

int myPower2NumFriendly(int *a, int n){ // oficial solution
    if(n<3)
        return 1;
    if(a[0]%a[1] ==0 && a[2]%a[1]==0)
        return 2*power_2_num_friendly(a+1,n-1);
    else
        return power_2_num_friendly(a+1,n-1);
}




int main(int argc, char* argv[]) {// input is through terminal //
    
    int ar[] = {2,10,5,100,20,40,8,16,7,9};
    printf("\n\n%d\n\n", power2NumFriendly(ar, 10));
    return 0;
}