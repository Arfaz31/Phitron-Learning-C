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
     long long int x;
     scanf("%lld",&x);
     for (int i = 0; i < n; i++)
     {
        if(arr[i]==x)
        {
            printf("%d",i);
            break;
         
        } else if (i==n-1)
        {
            printf("-1");
        }
      
        
     }
   

    return 0;
}