#include<stdio.h>
int main()
//problem-2
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a+b);
//     return 0;
    
// }

//problem-3
// {
//   int a;
//   long long int b;
//   double c;
//   char d;
//   scanf("%d %lld %lf %c", &a, &b, &c, &d);  
//   printf("%d\n%lld\n%.2lf\n%c", a, b, c, d);
//   return 0;  
// }

//problem-4
// {
//     int n;
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++)
//     {
//         printf("I Love Practice\n");
//     }
// }

//problem-5
// {
//     int N;
//     scanf("%d", &N);
//     for(int i=1; i<=N; i++)
//     {
//         if(i%5==0){
//             printf("%d yes\n", i);
//         }else{
//             printf("%d no\n", i);
//         }
//     }
// }

{
   long long int N;
    scanf("%lld", &N);

    long long int remain=0;
   
    if(N >= 1000){
        printf( "I will buy Punjabi\n");
       remain = N-1000; 
       if(remain >= 500){
           printf("I will buy new shoes\n");
           printf("Alisa will buy new shoes\n");
       }
    } else{
        printf("Bad luck!");
    }

}