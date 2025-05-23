#include <stdio.h>

long long log2_recursive(long long n)
{
    if (n == 1)
        return 0;
    return 1 + log2_recursive(n / 2);
}

int main()
{
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", log2_recursive(n));
    return 0;
}

// | Call                | What Happens            | Return Value |
// | ------------------- | ----------------------- | ------------ |
// | `log2_recursive(8)` | 1 + `log2_recursive(4)` | 1 + 2 = 3    |
// | `log2_recursive(4)` | 1 + `log2_recursive(2)` | 1 + 1 = 2    |
// | `log2_recursive(2)` | 1 + `log2_recursive(1)` | 1 + 0 = 1    |
// | `log2_recursive(1)` | return 0                | 0            |
