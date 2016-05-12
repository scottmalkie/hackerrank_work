#include <stdio.h>
#include <stdlib.h>

int smallestValue(int* arr, int len)
{
    int smallValue = arr[0]; // start with first integer
        
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < smallValue)
        {
            smallValue = arr[i];
        }
    }
    
    return smallValue;
}


int cut_result(const int* arr, const int len)
{
    int newSmall;
    newSmall = smallestValue(arr, len);
    
    printf("%d\n", newSmall);
    
    return EXIT_SUCCESS;
}

int main(int argc, char *argv[]) 
{
    int t;
    scanf("%d", &t);
    
    int arr[t];
    
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    cut_result(arr, t);
    
    return EXIT_SUCCESS;
}