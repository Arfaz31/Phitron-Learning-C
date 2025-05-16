#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // int specificRow;
    // scanf("%d", &specificRow);
    // for(int i = 0; i < c; i++)
    // {
    //     printf("%d ", a[specificRow][i]);
    // }

    int specificColumn;
    scanf("%d", &specificColumn);
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][specificColumn]);
    }

       return 0;
}