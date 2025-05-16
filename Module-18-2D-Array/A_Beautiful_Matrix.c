
#include <stdio.h>
#include <math.h>
int main()
{
    int r = 5;
    int c = 5;

    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 1)
            {
                int move = abs(i - 3) + abs(j - 3);
                printf("%d\n", move);
            }
        }
    }

    return 0;
}