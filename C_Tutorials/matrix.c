#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

void fun(int **arr,int m,int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
    for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

}

int main()
{
    int i,j,m,n;
    printf("enter order of matrix(m*n)");
    scanf("%d*%d",&m,&n);
    int **a=(int **)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
        a[i]=(int *)malloc(n*sizeof(int));

    fun(a,m,n);
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}