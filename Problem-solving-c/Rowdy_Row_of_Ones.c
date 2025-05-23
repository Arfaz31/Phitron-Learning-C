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

    int maxOnes = 0;
    int maxRowIndex = -1; // -1 মানে: এখনো কোনো valid row পাইনি|  পরে যখন valid row পাই, তখন সেটা দিয়ে update করবো

    for (int i = 0; i < r; i++)
    {
        int oneCount = 0;

        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 1)
            {
                oneCount++;
            }
        }

        if (oneCount > maxOnes)
        {
            maxOnes = oneCount;
            maxRowIndex = i;
        }
    }

    printf("%d\n", maxRowIndex);

    return 0;
}
