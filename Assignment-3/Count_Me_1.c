#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     long long int arr[n];
     for(int i=0;i<n;i++)
     {
         scanf("%lld",&arr[i]);
     }
     long long int frre[2]={0};
     for(int i=0;i<n;i++)
     {
        long long int val = arr[i];
        if(val%2==0)
        {
            frre[0]++;

        } else if(val%2==0 && val%3==0)
        {
            frre[0]++;
        } else if(val%3==0)
        {
            frre[1]++;
        }
     }

     printf("%lld %lld",frre[0],frre[1]);
    return 0;
}