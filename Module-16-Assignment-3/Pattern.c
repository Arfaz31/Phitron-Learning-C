#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash1 = 1;

    int space1 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= hash1; k++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }

        printf("\n");
        hash1 += 2;
        space1--;
    }

    int hash2 = hash1 - 4;
    int space2 = 1;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= space2; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= hash2; k++)
        {
            if (n % 2 == 0)
            {
                if (i % 2 == 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
        }

        printf("\n");
        hash2 -= 2;
        space2++;
    }

    return 0;
}