#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int val=strcmp(a,b);
    if(val<0)
    {
        printf("%s",a);
    }else if(val == 0)
    {
        printf("%s",a);
      
    }else if(val>0)
    {
        printf("%s",b);
    }
    return 0;
}

//nagative value means a is smaller, 0 means equal, positive value means b is smaller