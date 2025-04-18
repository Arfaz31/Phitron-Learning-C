#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
      int sumP=0,sumN=0;
     for(int i=0;i<n;i++)
     {
        if(arr[i]>0)
        {
            sumP+=arr[i];
        }else{
            sumN+=arr[i];
        }
     }
     printf("%d %d",sumP,sumN);
    return 0;
}