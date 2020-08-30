
// Implementing stack with linked list in C


#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* link;
};

struct Node* top = NULL;


void push(int x) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> link = top;
	top = temp;
}


void pop() {
	struct Node* temp;
	if (top == NULL) {
		return;
	}
	temp = top;
	top = top -> link;
	free(temp);
}


int main() {

	push(2);
	push(3);
	push(4);
	pop();
	
}
