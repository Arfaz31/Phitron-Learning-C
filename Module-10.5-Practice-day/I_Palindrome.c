#include<stdio.h>
int main()
{
     char str[100000];
     scanf("%s", str);
     int len = strlen(str);
     int isPal = 1;
     for(int i=0, j=len-1; i<j; i++, j--)
     {
         if(str[i] != str[j])
         {
             isPal = 0;
             break;
         }
     }
     if(isPal)
     {
         printf("YES\n");
     }
     else
     {
         printf("NO\n");
     }
    return 0;
}