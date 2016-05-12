#include <stdio.h>
#include <stdlib.h>

int cut_result(const int* arr, const int arrLen)
{
    int* newArr = arr;
    int smallestValue = newArr[0];
    
    for (int x = 0; x < arrLen; x++)
    {
        printf("%d\n", newArr[x]);
    }

    return EXIT_SUCCESS;     
}


int main()
{
    int arrLen; 
    scanf("%d",&arrLen);
    
    int arr[arrLen];
   
    for(int i = 0; i < arrLen; i++)
    {
       scanf("%d",&arr[i]);
    }
    
    cut_result(arr, arrLen);
    
    return EXIT_SUCCESS;
}
