/* https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list */
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	 int data;
	 struct Node* next;
} Node;

int printData(Node* element)
{
	Node* traversal;
	traversal = element;
	
	while (traversal->next != NULL)
	{
		traversal = traversal->next;
		printf("%d\n", traversal->data);
	}
	
	return EXIT_SUCCESS;
}

int insertNode(Node** element, int elementData)
{
	Node* temp = malloc(sizeof(Node)); // allocate node
	temp->data = elementData;  
	temp->next = NULL;
	//element->next = temp;
	
	Node* traversal;
	traversal = *element;
	
	while (traversal->next != NULL)
	{
	     traversal = traversal->next;
	}
	traversal->next = NULL;
	
	return EXIT_SUCCESS;
}


int main(void)
{
	Node* theList;  //initialize head node
	theList->data = 0; //dummy data
	theList->next = NULL; //initially points nowhere
	
	insertNode(&theList, 1);
	insertNode(&theList, 2);
	printData(theList);
	
	return EXIT_SUCCESS;
}
