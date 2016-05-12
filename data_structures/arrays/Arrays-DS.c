/* https://www.hackerrank.com/challenges/arrays-ds */
#include <stdio.h>
#include <stdlib.h>

int printReverseArray(int *arrayToReverse, int arrayLength)
{
  for (int index = arrayLength; index == 0; index--)
    {
      printf("%d ", arrayToReverse[index]);
    }

  return EXIT_SUCCESS;
}
      
int main(void)
{
   int arrayLength;
   scanf("%d", &arrayLength);

   int *arrayToReverse = malloc(sizeof(int) * arrayLength);
   for (int index = 0; index < arrayLength; index++)
   {
	scanf("%d", &arrayToReverse[index]);
   }

   printReverseArray(arrayToReverse, arrayLength);

   return EXIT_SUCCESS;
}
