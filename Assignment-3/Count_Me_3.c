#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
        char str[10001];
        scanf("%s",str);
        int len = strlen(str);
        int c =0;
        int s=0;
        int d=0;
        for(int i=0; i<len; i++)
        {
         if(str[i] >='A' && str[i] <= 'Z')
         {
            c++;
         } else if(str[i] >='a' && str[i] <= 'z')
         {
            s++;
         } else{
            d++;
         }
        }
        printf("%d %d %d\n",c,s,d);
     }
   

    return 0;
}