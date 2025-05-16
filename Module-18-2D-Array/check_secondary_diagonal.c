#include <stdio.h>
#include <stdbool.h> // Required for 'bool'

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

    bool is_diagonal = true;

    // Check for square matrix
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j != r - 1 && a[i][j] != 0)
                {
                    is_diagonal = false;
                    break; // Exit inner loop early
                }
            }
            if (!is_diagonal)
                break; // Exit outer loop early
        }

        if (is_diagonal)
        {
            printf("This is a secondary diagonal matrix\n");
        }
        else
        {
            printf("This is not a secondary diagonal matrix\n");
        }
    }
    else
    {
        printf("This is not a secondary diagonal matrix\n");
    }

    return 0;
}