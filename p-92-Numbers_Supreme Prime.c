#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int temp=n;
    int sum=0;
   
   
    if(n==1){
        printf("NO");
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            printf("NO");
           return 0;
        }
    }
        while(temp!=0){
          int  k=temp%10;
          sum=sum+k;
             temp=temp/10;
        }
    
        for(int j=2;j*j<=sum;j++){
             if(sum%j==0){
                 printf("NO"); 
                 return 0;
             }
        }
          printf("YES");
      
    
    return 0;
}