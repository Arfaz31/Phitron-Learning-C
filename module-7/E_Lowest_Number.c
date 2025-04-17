#include<stdio.h>
#include<limits.h>
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     int max = INT_MAX;
   
     for(int i=0;i<n;i++){
    
         if(arr[i] < max){
         
            if(arr[i] == max){
                continue;
        
            }
          
         max = arr[i];
       
         }
        
       
     }
   for(int i=0;i<n;i++){
       if(arr[i] == max){
        printf("%d %d",max, i+1);
        break;
       }
   }
    return 0;
}