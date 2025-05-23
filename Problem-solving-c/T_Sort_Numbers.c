#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Store in an array
    int arr[3] = {a, b, c};

    // Sort using simple Bubble Sort (since it's only 3 elements)
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted values
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Print blank line
    printf("\n");

    // Print original values
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
