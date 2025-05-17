#include <stdio.h>

long long sum(long long a[], int n, int i, long long total)
{
    if (i == n)
    {
        return total;
    }
    total += a[i];
    return sum(a, n, i + 1, total);
}

int main()
{
    int n;
    scanf("%d", &n);

    long long a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long total = 0;
    long long sum_of_num = sum(a, n, 0, total);
    printf("%lld\n", sum_of_num);

    return 0;
}
