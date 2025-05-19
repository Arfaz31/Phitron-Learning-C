#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        long long m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        if (m == 0)
        {
            printf("0\n");
        }
        else if (a != 0 && b != 0 && c != 0)
        {
            long long multiplication_num = a * b * c;
            if (m % multiplication_num == 0)
            {
                printf("%lld\n", m / multiplication_num);
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            // a, b, or c is zero, and m is not zero
            printf("-1\n");
        }
        t--;
    }
    return 0;
}