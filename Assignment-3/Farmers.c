#include<stdio.h>
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int totalWork = M1 * D;
        int newDays = totalWork / (M1 + M2); 
        int fewerDays = D - newDays;
        printf("%d\n", fewerDays);
     }
    return 0;
}