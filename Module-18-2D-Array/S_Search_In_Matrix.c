#include <stdio.h>
#include <stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int check_exit_number;
    scanf("%d", &check_exit_number);
    int is_exist = false;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == check_exit_number)
            {

                is_exist = true;
                break;
            }
        }
        if (is_exist == true)
        {
            break;
        }
    }

    if (is_exist == true)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}