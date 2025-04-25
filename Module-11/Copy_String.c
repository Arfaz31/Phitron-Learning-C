#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",a,b);
    int len=strlen(b);
    for(int i=0;i<3;i++) //take full length with null character
    {
        a[i]=b[i];
        a[i+2] ='\0';
      
    }

    // strcpy(a,b);
    printf("%s %s",a, b);
     
    return 0;
}