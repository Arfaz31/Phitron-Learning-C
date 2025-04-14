#include<stdio.h>
#include<limits.h>
int main()
{
     int n;
     scanf("%d",&n);
     int max=INT_MIN;
     for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        if(x>max){
            max=x;
        }
     }
     printf("%d",max);
    return 0;
}