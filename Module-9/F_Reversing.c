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
   
    for( int i=0,j=n-1;i<j;i++,j--)
    {
        long long int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
       
    }
    
    for(int i=0; i<n;i++)
    {
       printf("%d ", arr[i]);
    }
    return 0;
}