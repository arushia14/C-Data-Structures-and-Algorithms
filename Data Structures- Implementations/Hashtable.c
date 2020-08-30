// Hashtable implementation in C

#include<stdio.h>
#include<stdlib.h>

struct pair {
	int key;
	int value;
};


void display(struct pair name[], int size) {   // Displaying the hash table
	int i;
	printf("The keys and values are: ");
	for(i = 0; i < size; i++) {
		printf("%d => %d \n", name[i].key, name[i].value);
	}
}


void search(struct pair name[], int size) {
	int k;
	printf("Element to search: ");
	scanf("%d", &k);
	if (name[k % size].key == k) {
		printf("Value found: %d\n", name[k % size].value);
	}
	else {
		printf("No such element found.\n");
	}

}


int main() {
	int size, i, key_temp, value_temp;

	printf("Enter the size of the table:\n");
	scanf("%d", &size);
	struct pair table[size];
	printf("Enter the elements\n");
	for (i = 0; i < size; i++) {
		printf("key: ");
		scanf("%d", &key_temp);
		printf("value: ");
		scanf("%d", &value_temp);

		table[value_temp % size].key = key_temp;  // Simple hashing function
		// table[i].key = key_temp;        Without hashing 
		table[value_temp % size].value = value_temp;
		// table[i].value = value_temp;	   Without hashing
		printf("\n"); 	
	}

	display(table, size);
	search(table, size);

}







