#include <stdio.>
#include <stdlib.h>

int smallest_lane(const int arr[], int firstIndex, int secondIndex)
{
/* takes an array and two indices, returns the smallest value between the two indices (inclusive) */
	int smallestValue = arr[firstIndex];
	
	for (int x = firstIndex; x <= secondIndex; x++)
	{
       if (arr[x] < smallestValue)		  
		{
			    smallestValue = arr[x];

        }            
    }	
		
	return smallestValue;
}


int main(void)
{
    int n; 
    int t; 
    scanf("%d %d",&n,&t);
    
    int width[n];
    for(int width_i = 0; width_i < n; width_i++)
    {
       scanf("%d",&width[width_i]);
    }
    
    for(int a0 = 0; a0 < t; a0++)
    {
        int i; 
        int j; 
        scanf("%d %d",&i,&j);
        
        printf("%d\n", smallest_lane(width, i, j));
                
    }
    
    return EXIT_SUCCESS;
}

