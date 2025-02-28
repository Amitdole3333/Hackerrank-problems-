#include <stdio.h>

int main() {
   int a,b,N;
    scanf("%d %d",&a,&b);
    N=a^b;
    if((N&(N-1))==0 && a!=b){
     printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}