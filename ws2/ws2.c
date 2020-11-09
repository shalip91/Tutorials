#include <stdio.h>
#include <stdlib.h> /*malloc*/



void MySwap(int *x, int *y);
int *CopyArray(int *arr1, int size);
void PrintTypeAddress(int *ptr);
void SwapTwoSize_t(size_t *x, size_t *y);
void SwapTwoSize_tPointers(size_t **x_ptr, size_t **y_ptr);

int main ()

{   /************************/
    /*initialization section*/
    /************************/

    /* Q1 */
    int x = 5;
    int y = 7;
    /* Q2 */
    int arr1[] = {1,2,3,4};
    int *arr_copied;
    int size;
    int i;
    /* Q3 */
    static int s_i = 7;
    int ii = 7;
    int *ptr = &ii;
    int *ptr2 = (int *)malloc(sizeof(int));
    /* Q4 */
    size_t a = 5;
    size_t *a_ptr = &a;
    size_t b = 10;
    size_t *b_ptr = &b;



    /**************************/
    /*running function section*/
    /**************************/

    /* Q1 
    swaping between 2 variables values.*/
    MySwap(&x, &y);
    printf("\nQ1\nthe values after swap are: x = %d, y = %d\n\n", x, y);


    /*Q2
    copy an array.*/
    size = sizeof(arr1) / sizeof(arr1[0]);
    arr_copied = CopyArray(arr1, size);

    printf("Q2\nthe copied array is: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr_copied[i]);

    free(arr_copied);


    /*Q3
    printing the addresses of various types.*/
    printf("\n\nQ3");
    PrintTypeAddress(&s_i);
    PrintTypeAddress(&ii);
    PrintTypeAddress(ptr);
    PrintTypeAddress(ptr2);
    free(ptr2);


    /*Q4.1
    swap two size_t variables.*/
    SwapTwoSize_t(&a, &b);
    printf("\n\nQ4.1\nthe values after swap are: a = %ld, b = %ld\n\n", a, b);
    

    /*Q4.1
    swap two size_t pointer's addresses.*/
    printf("Q4.2\nthe values befor swap are: a_ptr = %p, b_ptr = %p\n", (void *)a_ptr, (void *)b_ptr);
    SwapTwoSize_tPointers(&a_ptr, &b_ptr);
    printf("the values after swap are: a_ptr = %p, b_ptr = %p\n", (void *)a_ptr, (void *)b_ptr);
    printf("the values after swap are: a = %ld, b = %ld\n\n", a, b);
    
    return 0;
}

void MySwap(int *x, int *y)
{   
   int temp = *y;
   *y = *x;
   *x = temp;
}


int *CopyArray(int *arr1, int size)
{
    int *arr2 = (int *)malloc(size * sizeof(int));
    int i;

    for (i = 0; i < size; i++)
        arr2[i] = arr1[i];
        
    return arr2;
}


void PrintTypeAddress(int *ptr)
{
    printf("\nthe address of this type: %p", (void*)ptr);
}


void SwapTwoSize_t(size_t *x, size_t *y)
{   
    size_t temp = *y;
    *y = *x;
    *x = temp;
}


void SwapTwoSize_tPointers(size_t **x_ptr, size_t **y_ptr)
{   
    size_t *temp = *y_ptr;
    *y_ptr = *x_ptr;
    *x_ptr = temp;
}