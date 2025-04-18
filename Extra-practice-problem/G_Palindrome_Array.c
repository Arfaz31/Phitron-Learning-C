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
    long long int arr1[n];
    for (int i = n-1; i >= 0; i--)
    {
        arr1[i] = arr[i];
       
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld arr1 \n",arr1[i]);
      
        if (arr[i] != arr1[i])
        {
           
            printf("NO\n");
            break;
        } 
       
    }
  

    return 0;
}