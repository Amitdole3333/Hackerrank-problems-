#include <stdio.h>

int main() {

   long int n,sum=0;
    scanf("%ld",&n);
    for(long int i=1;i<=n-1;i++){
    if(n%i==0){
        sum=sum+i;
    }
    }
    if(sum==n){
        printf("YES");
    }
    else{
     printf("NO");
    }
    return 0;
}