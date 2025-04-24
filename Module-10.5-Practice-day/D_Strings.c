#include<stdio.h>
#include<string.h>
int main()
{
     char A[101], B[101];
     scanf("%s %s", A, B);
     int len1 = strlen(A);
     int len2 = strlen(B);
     printf("%d %d\n", len1, len2);
     printf("%s%s\n", A, B);

  // Swap first characters
  char temp = A[0];
  A[0] = B[0];
  B[0] = temp;

  // Print after swap
  printf("%s %s\n", A, B);
   
    return 0;
}