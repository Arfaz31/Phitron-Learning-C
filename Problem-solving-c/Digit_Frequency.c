#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int arr[10] = {0}; // Store frequency of digits 0-9

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            // s[i] >= '0' && s[i] <= '9' means If the character's ASCII value is between 48 ('0') and 57 ('9'), it is a digit.
            arr[s[i] - '0']++; // Convert the digit character to index and increment frequency count
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
