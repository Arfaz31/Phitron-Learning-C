#include<stdio.h>
#include<stdlib.h>
int main()
{
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
     
    }
    int temp=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<temp)
        {
            temp=arr[i];
        }
        printf("%d",temp);
    }
  

    return 0;
}