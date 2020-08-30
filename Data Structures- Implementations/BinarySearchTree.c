
// Binary Search Tree implementation in C


# include <stdio.h>
# include <stdlib.h>


struct BstNode
{
	int data;
	struct BstNode* left;
	struct BstNode* right;
};


// Function to create a new node

struct BstNode* getNewNode(int data) {
	struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
	newNode -> data = data;
	newNode -> left = newNode -> right = NULL;
	return newNode;
}


// Function to insert a new node in the tree

struct BstNode* insert(struct BstNode* ptrRoot, int data) {
	if (ptrRoot == NULL) {
		ptrRoot = getNewNode(data);
		return ptrRoot;
	}
	else if(data <= ptrRoot->data) {
		ptrRoot->left = insert(ptrRoot->left, data);
	}
	else {
		ptrRoot->right = insert(ptrRoot->right, data);
	}
	return ptrRoot;
}


// Function to search for a node in the tree

int search(struct BstNode* ptrRoot, int data) {
	if(ptrRoot == NULL) {
		return 0;
	}
	else if(ptrRoot->data == data) {
		return 1;
	}
	else if(data <= ptrRoot->data) {
		return search(ptrRoot->left, data);
	}
	else {
		return search(ptrRoot->right, data);
	}
}


// Finding the node with the MINimum value

int findMin(struct BstNode* ptrRoot) {
	if (ptrRoot == NULL) {
		printf("The tree is empty\n");
		return 0;
	}
	while (ptrRoot->left != NULL) {
		ptrRoot = ptrRoot->left;
	}
	return ptrRoot->data;
}


// Finding the node with MAXimum value

int findMax(struct BstNode* ptrRoot) {
	if (ptrRoot == NULL) {
		printf("The tree is empty\n");
		return 0;
	}
	while (ptrRoot->right != NULL) {
		ptrRoot = ptrRoot->right;
	}
	return ptrRoot->data;
}



int main() {

	struct BstNode* ptrRoot = NULL;
	ptrRoot = NULL;
	ptrRoot = insert(ptrRoot, 15);
	ptrRoot = insert(ptrRoot, 10);
	ptrRoot = insert(ptrRoot, 20);
	ptrRoot = insert(ptrRoot, 05);
	ptrRoot = insert(ptrRoot, 30);
	ptrRoot = insert(ptrRoot, 25);

	int n;
	printf("Enter number to be searched: \n");
	scanf("%d",&n);

	if (search(ptrRoot, n) == 1) {
		printf("Found\n");
	}
	else {
		printf("Not Found\n");
	}

	return 0;
}


