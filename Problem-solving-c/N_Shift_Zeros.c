#include <stdio.h>

void printShifted(int a[], int n)
{
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            printf("%d ", a[i]);
        }
        else
        {
            zeroCount++;
        }
    }

    for (int i = 0; i < zeroCount; i++)
    {
        printf("0 ");
    }

    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printShifted(a, n);

    return 0;
}

// by using recursion

// #include <stdio.h>

// void shiftZeros(int a[], int n, int i, int *zeroCount)
// {
//     if (i == n)
//         return;

//     if (a[i] != 0)
//     {
//         printf("%d ", a[i]);
//     }
//     else
//     {
//         (*zeroCount)++; // শূন্য হলে count বাড়াও
//     }

//     shiftZeros(a, n, i + 1, zeroCount); // রিকার্শন কল
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int zeroCount = 0;
//     shiftZeros(a, n, 0, &zeroCount); // রিকার্শন দিয়ে শূন্য বাদে প্রিন্ট + count

//     for (int i = 0; i < zeroCount; i++)
//     {
//         printf("0 ");
//     }

//     printf("\n");
//     return 0;
// }
