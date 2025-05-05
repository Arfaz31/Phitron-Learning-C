#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++) // for printing new line
    {
        for (int j = 1; j <= space; j++) // for printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= val; k++) // for printing star
        {
            printf("%d ", k);
        }
        printf("\n");
        val++;
        space--;
    }
    return 0;
}