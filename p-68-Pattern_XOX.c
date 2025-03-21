#include <stdio.h>

int main() {
   int n;
    scanf("%d",&n);
  if(n<=1){
      printf("Shape Not Possible");
  }    
    if(n>=2){
        if(n%2==0){
        n=n+1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if(i==(n+1)/2 || j==(n+1)/2){
              printf("x");
          }
            else{
                printf("o");
            }
        }
        printf("\n");
    }
    }
    
    
    return 0;
}