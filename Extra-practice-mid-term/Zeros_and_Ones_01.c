#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count[2] = {0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", count[i]);
    }
    return 0;
}