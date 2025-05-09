#include <stdio.h>

int main()
{
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);

    int series[n]; // Create an array of size n
    series[0] = a;
    series[1] = b;
    series[2] = c;

    for (int i = 3; i < n; i++)
    {
        series[i] = series[i - 1] + series[i - 2] + series[i - 3];
    }

    printf("%d\n", series[n - 1]); // Print the nth term (adjusted for 0-based index)
    return 0;
}
