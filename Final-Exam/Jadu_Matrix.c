#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    // Input matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c)
    {
        printf("NO");
        return 0;
    }

    bool is_primary_diagonal = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i == j && a[i][j] != 1)
            {
                is_primary_diagonal = false;
                // printf("primary middle not one\n");

                break;
            }
            if (i != j && i + j != r - 1 && a[i][j] != 0)
            {
                is_primary_diagonal = false;
                // printf("primary side not zero\n");

                break;
            }
        }
        if (!is_primary_diagonal)
            break;
    }

    bool is_secondary_diagonal = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (i + j == r - 1 && a[i][j] != 1)
            {
                is_secondary_diagonal = false;
                // printf("senodary middle not one\n");
                break;
            }
            if (i + j != r - 1 && i != j && a[i][j] != 0)
            {
                is_secondary_diagonal = false;
                // printf("senodary side not zero\n");
                break;
            }
        }
        if (!is_secondary_diagonal)
            break;
    }

    if (is_primary_diagonal && is_secondary_diagonal)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}