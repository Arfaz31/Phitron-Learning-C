
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min_num = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min_num)
        {
            min_num = a[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_num)
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        printf("Lucky");
    }
    else
    {
        printf("Unlucky");
    }

    return 0;
}