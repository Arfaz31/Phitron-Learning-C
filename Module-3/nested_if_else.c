#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>= 5000){
        printf("You can buy a car");
    }
    if(tk >= 10000){
        printf("You can buy a house");
    }
    else{
        printf("You can buy a bike");
    }
    return 0;
}