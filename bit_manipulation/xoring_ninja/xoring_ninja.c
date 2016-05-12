#include <stdio.h>
#include <stdbool.h>

bool debug = false;

int main() 
{  
	int t; //number of testcases
	scanf("%i", &t);
	if (debug == true)
	{
		printf("Number of testcases: %i\n", t);
	}
	
	int array[t][100000]; // max number of elements
	
	for (int i = 0; i < t; i++)
	{
		scanf("%i", &array[i][0]);
		if (debug == true)
		{
			printf("Writing %i to index 0 of array %i\n", array[i][0], i);
		}
		for (int j = 1; j <= array[i][0]; j++)
		{
			scanf("%i",&array[i][j]);
			if (debug == true) 
			{
			printf("Writing %i to index %i of array %i\n", array[i][j], j, i);
			}
		}				
	}
	
	
	
	return 0;  
}
