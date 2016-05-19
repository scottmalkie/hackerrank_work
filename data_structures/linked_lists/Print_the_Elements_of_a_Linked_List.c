/* https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
	 int data;
	 struct Node* next;
} Node;

int printData(Node* head)
{
	printf("%d\n", head->data);
	
	return EXIT_SUCCESS;
}

int main(void)
{
	Node* theList;  //initialize head node
	theList->data = 0; //dummy data
	theList->next = NULL; //initially points nowhere
	
	Node* temp = malloc(sizeof(Node)); // allocate first node
	temp->data = 1;  
	temp->next = NULL;
	theList->next = temp;
			
	Node* traversal;
	traversal = theList;
	
	while (traversal->next != NULL)
	{
		traversal = traversal->next;
		printData(traversal);
	}
	
	traversal->next = temp;
	
	Node* temp2 = malloc(sizeof(Node)); // allocate second node
	temp2->data = 2;  
	temp2->next = NULL;
	theList = temp2;
	
	Node* traversal2;
	traversal2 = theList;
	
	while (traversal2->next != NULL)
	{
		traversal2 = traversal2->next;
		printData(traversal2);
	}
	
	traversal2->next = temp2;

	return EXIT_SUCCESS;
}
