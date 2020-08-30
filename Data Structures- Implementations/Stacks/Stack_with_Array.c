// Implementing stack with array in C


#include <stdlib.h>
#include <stdio.h>


#define MAX_SIZE 101

int arr[MAX_SIZE];
int top = -1;

void push(int n) {        // Adding a new element
	if (top == MAX_SIZE - 1) {
		printf("Oops, Stack Overflow!\n");
		return;
	}
	arr[++top] = n;
}


void pop() {      // Removing the last item
	if (top == -1) {
		printf("Hmm, no element to pop here!\n");
		return;
	}

	top--;
}

int peek() {     // Getting the last element
	return arr[top];
}


void printStack() {
	int i;
	printf("The stack: ");
	for (i = 0; i <= top; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main() {
	push(2); 
	push(4);
	push(6);
	push(8);
	printf("%d\n", peek());
	pop(); 
	printStack();
}



