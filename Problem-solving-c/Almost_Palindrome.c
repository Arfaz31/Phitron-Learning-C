#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[1002];
        scanf("%s", s);

        int freq[26] = {0};
        for (int i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - 'a']++;
        }

        int odd_count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd_count++;
            }
        }

        if (odd_count == 0)
        {
            printf("%d\n", 0);
        }
        else
        {
            int result = odd_count - 1;
            printf("%d\n", result);
        }
    }

    return 0;
}
