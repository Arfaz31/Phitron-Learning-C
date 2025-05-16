#include <stdio.h>

void print(int n)
{
    if (n == 0)
        return;

    printf("%d", n); // print the current number first

    if (n > 1) // avoid trailing space
        printf(" ");

    print(n - 1); // recursive call with smaller number
}

int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
