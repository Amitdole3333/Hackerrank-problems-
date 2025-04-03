#include <stdio.h>

int main() {

   long long n;
    scanf("%lld",&n);
    int count=0;
    int flag=0;
    int j=0;
    if(n<0){
        n=n*-1;
    }
    while(n!=0){
        flag=0;
       j=n%10;
       if(j==0 || j==1){
           n=n/10;
           continue;
       }
        for(int i=2;i<=j-1;i++){
            if(j%i==0){
                flag=1;
                n=n/10;
                break;
            }
        }
        if(flag==0){
            ++count;
            n=n/10;
        }
    }
    printf("%d",count);
    return 0;
}