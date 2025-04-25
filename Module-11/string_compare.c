#include<stdio.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int val=strcmp(a,b);
    if(val<0)
    {
        printf("A is smaller");
    }else if(val == 0)
    {
        printf("A is equal to B");
    }else if(val>0)
    {
        printf("B is smaller");
    }
    return 0;
}


//nagative value means a is smaller, 0 means equal, positive value means b is smaller