#include <stdio.h>


int SeaLevel(double a[], int len){

    int low = 0, high = len-1, mid = (high - low) / 2;

    while(high >= low){

        printf("\na[mid] : %.2f\thigh : %d\tlow : %d\tmid : %d", a[mid], high, low, mid);
        mid = (high + low) / 2;
        if(a[mid]<0 && a[mid]*a[mid+1] > 0)
            high = mid-1;
        else if(a[mid]>0 && a[mid]*a[mid+1] > 0)
            low = mid + 1;
        else
            return mid;
    }
    return -1;

}


int main(int argc, const char * argv[]){
    // double megerments[] = {888.8,503.8,200.0,-20.8,-51.0,-31.6,-123.4,-78.1,-51.4,-267.5,-100.1,-398.3};
    double megerments[] ={555.5,345.6,499.9,111.1,240.7,123.9,3.5,-1.2,-98.4,-150.4,-212.1};
    int len = sizeof(megerments) / sizeof(megerments[0]);

    printf("\n\nthe k index is: %d\n\n", SeaLevel(megerments, len));
  
    return 0;
}
