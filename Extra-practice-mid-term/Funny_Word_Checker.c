#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);
    char firstchar = s[0];
    char lastchar = s[strlen(s) - 1];
    if (firstchar == lastchar)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}