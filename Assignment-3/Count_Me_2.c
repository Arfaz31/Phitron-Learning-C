#include<stdio.h>
#include<string.h>
int main()
{
     char str[100000];
     scanf("%s",str);
     int len = strlen(str);
     int consonant=0;
     for(int i=0;i<len;i++)
     {
         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
         {
       continue;
          
         }else{
            consonant++;
         }
        
     }
     printf("%d", consonant);
    return 0;
}