/* https://www.hackerrank.com/challenges/dynamic-array */
#include <stdio.h>
#include <stdlib.h>

int seqList[1000000];
int lastAns = 0;

int query1(int seqIndex, int appendInt)
{
   return seqIndex;
}

int query2(int seqIndex)
{
   printf("%d\n", lastAns);
   
   return seqIndex;
}


int main(void)
{
   int numberOfTestcases;
   scanf("%d", &numberOfTestcases);
   
   return EXIT_SUCCESS;
}
