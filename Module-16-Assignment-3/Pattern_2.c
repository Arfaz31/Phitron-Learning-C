#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int i = val; i > 0; i--)
        {
            printf("%d", i);
        }
        printf("\n");
        val++;
        space--;
    }

    return 0;
}