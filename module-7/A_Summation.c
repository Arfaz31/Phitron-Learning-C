#include<stdio.h>
#include <stdlib.h>
int main()
{
    long long int n;
     scanf("%lld",&n);
    long long int arr[n];
     for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
     }
    long long int sum=0;
     for(int i=0;i<n;i++){
        sum+=arr[i];
     }
   long long int abs_value =llabs(sum);
     printf("%lld",abs_value );
    return 0;
}