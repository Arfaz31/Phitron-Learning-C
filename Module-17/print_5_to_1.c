#include <stdio.h>

void print(int i)
{
    if (i == 6)
    {
        return;
    }
    print(i + 1);
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    print(i);
    return 0;
}