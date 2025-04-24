#include<stdio.h>
#include<string.h>
int main()
{
    char S[10000];
    char T[10000];
    scanf("%s %s",S,T);
    int l1=strlen(S);
    int l2=strlen(T);
    printf("%d %d\n",l1,l2);
    printf("%s %s",S,T);
     
    return 0;
}