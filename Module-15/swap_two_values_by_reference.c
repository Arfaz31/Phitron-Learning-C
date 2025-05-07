#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b); // Passing addresses
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
