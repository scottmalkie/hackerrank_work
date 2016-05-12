#include <stdio.h>
#include <stdlib.h>

int diag_diff(int arr[], int dim)
{  
    int indexD1 = 0;
    int indexD2 = dim-1;
    int sumD1 = 0;
    int sumD2 = 0;
    int i = 0;
            
    while (++i < dim+1)
    {
        printf("loop: %i\n", i);
        printf("indexD1: %i\n", indexD1);
        sumD1 = sumD1 + arr[indexD1];
        printf("sumD1: %i\n", sumD1);
        printf("indexD2: %i\n", indexD2);        
        sumD2 = sumD2 + arr[indexD2];
        printf("sumD2: %i\n", sumD2);
        
        indexD1 = (i * (dim+1));
        indexD2 = (i * (dim-1) + (dim-1));
    };
    return abs(sumD1 - sumD2);  
}

int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n*n];
    for (int a_i = 0; a_i < n*n; a_i++)
    {
          scanf("%d",&arr[a_i]);
          printf("%d\n",arr[a_i]);
    };
    printf("%i", diag_diff(arr, n));
    return 0;
}
