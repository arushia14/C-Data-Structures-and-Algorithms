#include <stdio.h>
#include <math.h>

// A is the sorted array, n is the length of A, key is the element searched.
int IterBinarySearch(int A[], int n, int key)
{
    int low = 0;
    int high = n;
    int mid;
    int ans;

    while (low <= high)
    {
        mid = floor((low + high) / 2);
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int A[] = {3, 6, 9, 12, 15, 18, 21};
    printf("%d\n", IterBinarySearch(A, 7, 6));
}