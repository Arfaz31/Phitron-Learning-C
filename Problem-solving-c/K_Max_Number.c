#include <stdio.h>
#include <limits.h>

int max_num(int a[], int n, int i, int max)
{
    if (i == n)
    {
        return max;
    }
    if (a[i] > max)
    {
        max = a[i];
    }
    return max_num(a, n, i + 1, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = max_num(a, n, 0, INT_MIN);
    printf("%d", result);
    return 0;
}
