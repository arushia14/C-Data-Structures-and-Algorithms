// Linked list implementation in C


#include<stdio.h>
#include<stdlib.h>

struct Node    // Creating a Node struct 
{
	int data;
	struct Node* next;
};

struct Node* head;  // Creating pointer to the first node : pointer to head


void prepend(int x) {  // Adding data to the start of the linked list
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;  // OR (*temp).data = x;
	temp -> next = head;
	head = temp;
}


void delete(int n) {  // Deleting data from a position
    struct Node* temp1 = head;
    if(n==1){         // If the deletion is at the first postion
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;            
    for(i=1; i<n-1; i++)    // If the deletion is at nth position
    {
        temp1 = temp1->next;
    }
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}


void insert(int data, int n) {   // Adding data at the nth index
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1 -> data = data;
	temp1 -> next = NULL;
	struct Node* temp2 = head;
	int i;
	for(i = 1; i < n-1; i++) {
		temp2 = temp2 -> next;
	}
	temp1 -> next = temp2 -> next;
	temp2 -> next = temp1;
}


void reverse(struct Node* head) {         // Reversing a linked list
	struct Node *current, *prev, *successor;
	current = head;
	prev = NULL;
	while (temp != NULL) {
		successor = current -> next;
		current -> next = prev;
		prev = current;
		current = successor;
	}
	head = prev;
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



int main() {

	head = NULL;
	printf("Enter the numbers to enter in the Linked List\n");
	int n, i, x;
	scanf("%i", &n);

	for (i = 0; i < n; i++) {
		printf("Enter number: \n");
		scanf("%d", &x);
		prepend(x);
		printList();
	}
	

	insert(2,1);
	insert(3,2);
	insert(4,1);
	delete(4);
	printList();
}


