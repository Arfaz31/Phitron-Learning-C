#include <stdio.h>
int main()
{
    char s[78];
    scanf("%s", s);
    int length = strlen(s);
    int freq[26] = {0};
    for (int i = 0; i < length; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < length; i++)
    {
        if (freq[i] != 3)
        {
            printf("%c\n", i + 'a');
            break;
        }
    }
    return 0;
}