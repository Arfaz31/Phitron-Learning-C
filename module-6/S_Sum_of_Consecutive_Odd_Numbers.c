#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     for(int i=1;i<=t;i++){
        int x, y;
        scanf("%d %d",&x,&y);
        int sum=0;
     if(x > y){
        for(int j=y+1;j<x;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
     }else{
        for(int j=x+1;j<y;j++){
            if(j%2!=0){
                sum+=j;
            }
     }
     }
        printf("%d\n",sum);
     }
    return 0;
}