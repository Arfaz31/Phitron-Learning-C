#include <stdio.h>

void printEvenIndicesReverse(int arr[], int i)
{
    if (i < 0)
    {
        return;
    }

    if (i % 2 == 0)
    {
        printf("%d ", arr[i]);
    }

    printEvenIndicesReverse(arr, i - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printEvenIndicesReverse(arr, n - 1);

    return 0;
}
