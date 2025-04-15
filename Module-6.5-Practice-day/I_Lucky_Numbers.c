#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int r=n%10;
     int q=n/10;
     if(r%q==0 || q%r==0){
        printf("YES");
     }else{
        printf("NO");
     }
    return 0;
}