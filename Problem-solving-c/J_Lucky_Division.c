#include <stdio.h>
#include <stdbool.h>

bool isLucky(int num)
{
    if (num == 0)
    {
        return false;
    }
    while (num > 0)
    {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        num /= 10;
    }
    return true;
}

bool isAlmostLucky(int n)
{
    if (isLucky(n))
    {
        return true;
    }
    for (int i = 4; i <= n; ++i)
    {
        if (isLucky(i) && n % i == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (isAlmostLucky(n))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}