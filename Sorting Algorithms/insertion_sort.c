#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[] = {4,6,8,2,5,4};
    int length = sizeof(arr) / sizeof(arr[0]);

    int i, value, temp;

    for (i = 0; i < length; i++) {
    	value = arr[i];
		temp = i;
		
    	while (temp > 0 && arr[temp - 1] > value) {
    		arr[temp] = arr[temp-1];
			temp = temp-1;
    	}
    	arr[temp] = value;
    }

    int k;
    for (k = 0; k < length; k++)
    {
        printf("%d ", arr[k]);
        printf("\n");
    }
    return 0;
}