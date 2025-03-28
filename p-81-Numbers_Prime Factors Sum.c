#include <stdio.h>

int main() {

    long n;
    scanf("%ld",&n);
    long temp=n;
    long sum=0;
    for(long i=2;i<=n;i++){
      while(temp%i==0){
        sum=sum+i;
          temp=temp/i;
      }
    }
    printf("%ld",sum);
    return 0;
}