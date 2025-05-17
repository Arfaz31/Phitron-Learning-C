#include <stdio.h>

int main()
{
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);

    int a_div = a % k == 0;
    int b_div = b % k == 0;

    if (a_div && b_div)
    {
        printf("Both\n");
    }
    else if (a_div)
    {
        printf("Memo\n");
    }
    else if (b_div)
    {
        printf("Momo\n");
    }
    else
    {
        printf("No One\n");
    }

    return 0;
}
