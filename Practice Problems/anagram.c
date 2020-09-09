
//Check whether 2 strings are anagrams


#include <stdio.h>
#include <string.h>

int main() {

	printf("Enter the words\n");
	char word1[50];
	char word2[50];
	scanf("%s", word1);
	printf("\n");
	scanf("%s", word2);

	if (strlen(word1) != strlen(word2)) {
		printf("Not anagrams!\n");
		return 0;
	}

	int i, j;
	char temp;

	for(i = 0; i < strlen(word1); i++) {
		for(j = i+1; j < strlen(word2); j++) {
			if(word1[i] > word1[j]) {
				temp = word1[i];
				word1[i] = word1[j];
				word1[j] = temp;
			}
			if(word2[i] > word2[j]) {
				temp = word2[i];
				word2[i] = word2[j];
				word2[j] = temp;
			}

		}
	}

	for(i = 0; i < strlen(word1); i++) {
		if (word1[i] != word2[i]) {
			printf("Not anagrams!\n");
			return 0;
		}
	}
	printf("Words are anagrams!!\n");
	return 0;

}
