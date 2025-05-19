#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int size = (n - 1) / 2 + 6;
    int space = size - 1;
    int star = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= star; k++) // for printing star
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }

    int line_star = n;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++) // for printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= line_star; k++) // for printing star
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}