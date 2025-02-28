#include <stdio.h>

int main() {

   int n,N;
    scanf("%d",&n);
    N=n&(n-1);
    
    if(n>0 && N==0){
        printf("1");
    }
    else{
        printf("-1");
    }
    return 0;
}