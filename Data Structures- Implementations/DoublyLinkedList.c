// Doubly linked list implementation in C


#include<stdio.h>
#include<stdlib.h>

struct Node    // Creating a Node struct 
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;


struct Node* getNewNode(int x) {  // Function to create new node
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> next = NULL;
	temp -> prev = NULL;
	return temp;
}


void insertAtHead(int x) {
	struct Node* temp = getNewNode(x);
	if (head == NULL) {
		head = temp;
		return;
	}
	head -> prev = temp;
	temp -> next = head;
	head = temp;
}


void printList() {   // Printing the created linked list by traversal
	struct Node* temp = head;
	printf("The linked list is: \n");
	while (temp != NULL) {
		printf(" %d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}


void printInReverse() {
	struct Node* temp = head;
	if (temp == NULL) {
		return;
	}
	while (temp -> next != NULL) {
		temp = temp -> next;
	}

	printf("Printing in reverse: \n");
	while(temp != NULL) {
		printf("%d ", temp -> data);
		temp = temp -> prev;
	}
	printf("\n");
}


int main() {
	head = NULL;
	insertAtHead(2);
	insertAtHead(4);
	insertAtHead(6);
	printList();
	printInReverse();
}













