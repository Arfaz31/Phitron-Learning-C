#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star1 = 1;
    int space1 = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star1; j++)
        {
            printf("*");
        }
        printf("\n");
        star1 += 2;
        space1--;
    }
    int star = n + (n - 1);
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }

    return 0;
}