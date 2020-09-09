
// Reverse a string


# include <stdio.h>
# include <string.h>

int main(void) {
    char str[50];
    printf("Enter the string to reverse\n");
    scanf("%s", str);

    int len = strlen(str);
    int i;
    for (i = len; i >= 0; i--) {
    	printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

