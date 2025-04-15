#include<stdio.h>
int main()
{
     int t; //t is the number of test cases
     scanf("%d",&t);
   
     for(int i=1;i<=t;i++){
        int n; //n is the number of which we have to find the factorial
        scanf("%d",&n);
       long long int fact=1;
     for (int j = 1; j <= n; j++){
       fact=fact*j;
     }
     printf("%lld\n",fact);   
   
     }
   

    return 0;
}