/* https://www.hackerrank.com/challenges/2d-array */
#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_ARRAY 36 // 6x6

int calculateLargestHourglass(int *hourglassArray, int arraysize)
{
   int index = arraysize - 1;
   while (index >= 0)
   {
      printf("%d ", hourglassArray[index]);
      index--;
   }
   
   return EXIT_SUCCESS;
}

int main(void)
{

   int *hourglassArray = malloc(sizeof(int) * SIZE_OF_ARRAY);
   for (int index = 0; index < SIZE_OF_ARRAY; index++)
      {
	   scanf("%d", &hourglassArray[index]);
      }

   calculateLargestHourglass(hourglassArray, SIZE_OF_ARRAY);

   return EXIT_SUCCESS;
}
