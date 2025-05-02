
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d\n", i);
        }
        for (int j = 1; j <= i + 1; j++)
        {
            printf("%d ", j);
            printf("\n");
        }
    }
    return 0;
}