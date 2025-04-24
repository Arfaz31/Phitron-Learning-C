#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     while(t >0)
     {
        int w,h;
        scanf("%d %d",&w,&h);
        if(w==h)
        printf("Square\n");
        else
        printf("Rectangle\n");
        t--;
     }
    return 0;
}