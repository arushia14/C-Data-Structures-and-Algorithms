
// Implementing queues with linked list in C


# include <stdlib.h>
# include <stdio.h>


struct Node {
	int data;
	struct Node* next;
};


struct Node* first = NULL;
struct Node* last = NULL;


void enqueue(int x) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = x;
	temp -> next = NULL;

	if (first == NULL && last == NULL) {
		first = last = temp;
		return;
	}
	else {
		last -> next = temp;
		last = temp;
	}
}

void dequeue() {
	struct Node* temp = first;

	if (first == NULL) {
		return;
	}
	if (first == last) {
		first = last = NULL;
	}
	else {
		first = first -> next;
	}
	free(temp);
}


int peek() {
	if (first == NULL){
		printf("Empty queue\n");
	}
	return first -> data;
}

void printQueue() {
	struct Node* temp = first;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}


int main() {

	enqueue(2);
	printQueue();
	enqueue(6);
	printQueue();
	enqueue(8);
	printQueue();
	dequeue();
	printQueue();

}




