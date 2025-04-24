#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];

    // Input
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // Reverse logic
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        long long int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Output
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }

    return 0;
}
