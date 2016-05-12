#include <stdio.h>
#include <stdbool.h>

int lonely(int array[], int n)
{
    bool foundIt = false;
    
    // edge case: single element array
    if (n == 1)
    {
        printf("%i", array[0]);
        foundIt = true;
    }
            
    // sorted into pairs, each member must match either the one in front or behind
    for (int i = 1; i < n; i++)
    {
        if (array[i-1] != array[i] && array[i+1] != array[i])
            printf("%i", array[i]);
            foundIt = true;
    }
    
    // edge case: first element is singleton
    if (foundIt == false && (array[0] != array[1]))
    {
        printf("%i", array[0]);
        foundIt = true;
    }
    
    // edge case: last element is singleton
    if (foundIt == false && (array[n] != array[n-1]))
    {
        printf("%i", array[n]);
        foundIt = true;
    }
        
    return 0;
}

int simple_sort(int array[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int index_of_min = j;

        for (int k = j; k < n; k++)
        {
            if (array[index_of_min] > array[k])
            {
                index_of_min = k;
            }
        }
        int temp = array[j];
        array[j] = array[index_of_min];
        array[index_of_min] = temp;
    }
    
    return 0;
}

int main()
{
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }    
    
    simple_sort(arr, n);
    lonely(arr, n);   
    
    return 0;
}