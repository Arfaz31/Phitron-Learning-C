#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t > 0)
    {
        char str[101]; 
        scanf("%s", str);
        int len = strlen(str);

        if(len > 10)
        {
            printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
        }
        else
        {
            printf("%s\n", str);
        }

        t--; 
    }
    return 0;
}
