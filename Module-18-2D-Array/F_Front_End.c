#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        printf("%lld ", a[i]); // print front

        if (i != j) // avoid printing same element twice when i == j
        {
            printf("%lld ", a[j]); // print end
        }
    }

    return 0;
}
