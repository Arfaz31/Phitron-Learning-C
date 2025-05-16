#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int primary_diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primary_diagonal_sum = primary_diagonal_sum + a[i][j];
            }
        }
    }

    int secondary_diagonal_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                secondary_diagonal_sum = secondary_diagonal_sum + a[i][j];
            }
        }
    }

    int absolute_diff = abs(primary_diagonal_sum - secondary_diagonal_sum);
    printf("%d", absolute_diff);

    return 0;
}