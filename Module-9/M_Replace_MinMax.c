#include<stdio.h>
#include <limits.h>

int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     int max =INT_MIN;
     for(int i=0;i<n;i++)
     {
        if(arr[i]>max)
        {
            max=arr[i];
        }
     }
     int min =INT_MAX;
     for(int i=0;i<n;i++)
     {
        if(arr[i]<min)
        {
            min=arr[i];
        }
     }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==max)
        {
            arr[i]=min;
        }else if(arr[i]==min)
        {
            arr[i]=max;
        }
        printf("%d ",arr[i]);
    }
    
    return 0;
}