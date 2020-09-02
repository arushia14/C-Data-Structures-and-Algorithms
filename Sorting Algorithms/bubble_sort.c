
// Bubble sort in C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int array[] = {4, 6, 8, 3, 5, 9, 0, 2, 5, 7};
    int length = sizeof(array) / sizeof(array[0]);

    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    int k;
    for (k = 0; k < length; k++)
    {
        printf("%d\n", array[k]);
    }
    return 0;
}
