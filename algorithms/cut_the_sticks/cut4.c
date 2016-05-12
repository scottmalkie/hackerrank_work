#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define debug false

int smallestValue(const int* arr, const int arrLen)
{
    // finds smallest non-zero number in array
    
    int currentSmallest = 1000;
    
    for (int i = 0; i < arrLen; i++)
    {
        if ((arr[i] != 0) && (arr[i] < currentSmallest))
        {
            currentSmallest = arr[i];
            if (debug)
            {
                printf("currentSmallest in function = %d\n", currentSmallest);
            }
        }
    }
    
    return currentSmallest;
}

int cut_result(int* arr, const int arrLen)
{
    int numberOfZeroes = 0;
    int smallestNum = 1000;
    int numberOfCuts = 0;
    
    while (numberOfZeroes != arrLen)
    {
        smallestNum = smallestValue(arr, arrLen);  // find smallest value
        if (debug)
        {
            printf("smallestNum in loop = %d\n", smallestNum);
        }        
        
        for (int i = 0; i < arrLen; i++)
        {            
                        
            if (arr[i] - smallestNum >= 0)
            {
                    numberOfCuts++;
            }
            
            arr[i] = arr[i] - smallestNum; //subtract everything
                
            if (arr[i] < 0)
            {
                arr[i] = 0;
            }
            
        }
        
        printf("%d\n", numberOfCuts);
        
        if (numberOfCuts == 1)
        {
            return EXIT_SUCCESS;
        }
    
        numberOfCuts = 0;
        numberOfZeroes = 0;
    
        for (int j = 0; j < arrLen; j++)
        {
            if (arr[j] == 0)
            {
                numberOfZeroes++;
            }
        
        }            
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
    
    if (debug)
    {
        printf("arrLen = %d\n", arrLen);
    }
    
    cut_result(arr, arrLen);
    
    return EXIT_SUCCESS;
}
