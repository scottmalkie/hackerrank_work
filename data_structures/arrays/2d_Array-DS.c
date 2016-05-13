/* https://www.hackerrank.com/challenges/2d-array */
#include <stdio.h>
#include <stdlib.h>
#define SIZE_OF_ARRAY 36 // 6x6

int calculateLargestHourglass(int *hourglassArray, int arraysize)
{
   
   int hourglassIndexPivots[16] = {7, 8, 9, 10, 13, 14, 15, 16, 19, 22, 21, 22, 25, 26, 27, 28};
   
   int largestHourglassSum = -63;  // start at lowest possible sum
   
   // hourglass == [-7][-6][-5][pivot][+5][+6][+7] 
   for (int index = 0; index < 16; index++)
   {
      int pivotIndex = hourglassIndexPivots[index]; 
      int hourglassSum = hourglassArray[(pivotIndex - 7)] + \
                         hourglassArray[(pivotIndex - 6)] + \
                         hourglassArray[(pivotIndex - 5)] + \
                         hourglassArray[pivotIndex]       + \
                         hourglassArray[(pivotIndex + 5)] + \
                         hourglassArray[(pivotIndex + 6)] + \
                         hourglassArray[(pivotIndex + 7)];
      
      if (hourglassSum > largestHourglassSum)
      {
         largestHourglassSum = hourglassSum;
      }
   }
      
   return largestHourglassSum;
}

int main(void)
{

   int *hourglassArray = malloc(sizeof(int) * SIZE_OF_ARRAY);
   for (int index = 0; index < SIZE_OF_ARRAY; index++)
      {
	   scanf("%d", &hourglassArray[index]);
      }

   printf("%d", calculateLargestHourglass(hourglassArray, SIZE_OF_ARRAY));

   return EXIT_SUCCESS;
}
