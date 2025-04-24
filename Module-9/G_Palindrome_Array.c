#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    int isPalindrome = 1;  

    for(int i = 0, j = n - 1; i <= j; i++, j--)
    {
        if(arr[i] != arr[j])
        {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}




// #include<stdio.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);
//      long long int arr[n];
//      for(int i=0;i<n;i++)
//      {
//          scanf("%lld",&arr[i]);
//      }
//      for(int i=0,j=n-1;i<=j;i++,j--)
//      {
//          if(i == j)
//          {
//             printf("YES");
//             break;
//          }
//          if(arr[i] == arr[j])
//          {
//            continue;
//          } else if(arr[i] != arr[j])
//          {
//             printf("NO");
//             break;
//          }
//      }
//     return 0;
// }
