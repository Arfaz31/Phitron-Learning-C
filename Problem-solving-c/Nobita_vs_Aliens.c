#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int i = 0, j = n - 1, count = 0;
    while (i < j)
    {
        if (a[i] + a[j] <= k)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }

    printf("%d", count);

    return 0;
}