#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int count[M + 1]; // Create an array of size M + 1. because index starts from 0 and if M = 5 then index will be 0 to 5 so size will be 6.
    for (int i = 0; i <= M; i++)
    {
        count[i] = 0; // Initialize each element to 0
    }

    for (int i = 0; i < N; i++)
    {
        count[a[i]]++;
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}