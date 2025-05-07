
#include <stdio.h>
#include <string.h>

int main()
{
    // solve as string
    //  char n[100000];
    //  scanf("%s", n);

    // int sum = 0;
    // int len = strlen(n);

    // for(int i = 0; i < len; i++) {
    //     int val = n[i] - '0';  // same as -48
    //     sum += val;
    // }

    // printf("%d\n", sum);

    int number, sum = 0;
    scanf("%d", &number);

    while (number > 0)
    {
        sum += number % 10; // Add the last digit
        number /= 10;       // Remove the last digit
    }

    printf("%d\n", sum);

    return 0;
}
