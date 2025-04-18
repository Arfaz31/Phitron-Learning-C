#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int a,b;
    for(int i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        long long int sum = 0;
        for(long long int j=a;j<=b;j++)
        {
            sum += j;
        }
        printf("%lld\n",sum);
    }

    return 0;
}