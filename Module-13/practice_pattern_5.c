#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n + (n - 2);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= val; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        val++;
        space -= 2;
    }
    return 0;
}