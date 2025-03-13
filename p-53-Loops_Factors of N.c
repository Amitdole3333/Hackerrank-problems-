#include <stdio.h>

int main() {

   int n;
    int count=0;
    scanf("%d",&n);
    printf("%d", n);
       for(int i=n-1;i>=1;i--){
      if(n%i==0){
          count++;
          if((count&1)==0)
          printf(" %d",i);
      }
    }
        printf("."); 
    return 0;
}