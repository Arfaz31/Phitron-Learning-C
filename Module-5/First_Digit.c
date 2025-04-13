#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    //  int first_digit=X/1000;  //divide
    int last_digit=X%10;  //mode, last digit will be reminder
     if(last_digit%2==0){
        printf("Even");
     }else{
        printf("Odd");
     }
    return 0;
}