#include <stdio.h>

int main() {

   int n;
    int flag=0;
    long sum=0;
    int count=0;
    scanf("%d",&n);
        for(int i=2;count<n;i++){
        flag=0;
        for(int j=2;j<=i-1;j++){
           if(i%j==0){
             flag=1;
                break;
           }
        }
        if(flag==0){
            count++;
           sum+=i;
        }
    }
   if(count==n){
       printf("%ld",sum);
   }
    return 0;
}