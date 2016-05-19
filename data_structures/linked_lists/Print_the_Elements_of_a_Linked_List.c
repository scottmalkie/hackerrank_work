/* https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
	 int data;
	 struct Node* next;
} Node;

int printData(Node* element)
{
	printf("%d\n", element->data);
	
	return EXIT_SUCCESS;
}

int insertNode(Node* element, int elementData)
{
	Node* temp = malloc(sizeof(Node)); // allocate node
	temp->data = elementData;  
	temp->next = NULL;
	element->next = temp;
			
	Node* traversal;
	traversal = element;
	
	while (traversal->next != NULL)
	{
		traversal = traversal->next;
	}
	traversal->next = temp;
	
	return EXIT_SUCCESS;
}


int main(void)
{
	Node* theList;  //initialize head node
	theList->data = 0; //dummy data
	theList->next = NULL; //initially points nowhere
	
	for (int index = 0; index < 5; index++)
	{
		insertNode(theList, index);
	}	
	
	Node* traversal;
	traversal = theList;  //set to head node
	
	while (traversal->next != NULL)
	{
		traversal = traversal->next;
		printData(traversal);
	}

	return EXIT_SUCCESS;
}
