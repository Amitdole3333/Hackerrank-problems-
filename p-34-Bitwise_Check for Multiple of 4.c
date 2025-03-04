#include <stdio.h>

int main() {

   int n,N;
    scanf("%d",&n);
    N=n&3;
    if(N){
  printf("No");
    }
    else{
  printf("Yes");
    }
    return 0;
}