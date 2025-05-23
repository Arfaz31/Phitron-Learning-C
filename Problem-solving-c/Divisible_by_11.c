#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char num[102];
    scanf("%s", num);
    int odd_sum = 0;
    int even_sum = 0;
    for (int i = 0; num[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            odd_sum += num[i] - '0'; // 0 string(48) minuse kora hoise karon num[i] er value string, for example 6 string er value 54 so 54-48=6(int 6)
        }
        else
        {
            even_sum += num[i] - '0';
        }
    }

       int abs_diff = abs(odd_sum - even_sum);
    if (abs_diff % 11 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}