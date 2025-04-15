#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
//    long long int e= a + b + c;
   long long int f= (a - b) + c;
   long long int g= a + (b - c);
//    long long int h= a - b - c;
   long long int i= a + (b * c);
   long long int j= (a * b) + c;
//    long long int k= a * b * c;
   long long int l= (a * b) - c;
   long long int m= a - (b * c);
  if(f == d){
    printf("YES");
   } 
   else if(g == d){
    printf("YES");
   }
   
   else if(i == d){
    printf("YES");
   }
   else if(j == d){
    printf("YES");
   }
   
   else if(l == d){
    printf("YES");
   }
   else if(m == d){
    printf("YES");
   } else{
    printf("NO");
   }


   
    return 0;
}