#include <stdio.h>

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    print(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    print(1, n); // Start from 1
    return 0;
}
