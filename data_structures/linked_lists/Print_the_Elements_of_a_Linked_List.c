/* https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
	 int data;
	 struct Node *next;
}

void Print(Node *head)
{
	printf("%d", Node->data);
}

int main(void)
{
	for (int index = 0; ; index++)
	{
		if ((Node->next * index) != NULL)
		{
			Printf(Node->next * index);
		}
		else if ((Node->next * index) == NULL)
		{
			printf("Reached end of list");
			return EXIT_SUCCESS;
		}
		else 
		{
			printf("Error parsing linked list!")
			return EXIT_FAILURE;
		}

}
