#include <stdio.h>

void rec(int n)
{
    if (n == 0)
    {
        return;
    }

    rec(n / 10);       // remove last digit
    int last = n % 10; // get last digit
    printf("%d ", last);
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        rec(n);
        printf("\n");
    }
    return 0;
}