#include <stdio.h>

void fun(int *p) // receive address
{
    *p = 20; // change value
}
int main()
{
    int x = 10;
    fun(&x); // pass address
    // printf("%p\n", &x);
    printf("%d", x);
    return 0;
}