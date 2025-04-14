#include <stdio.h>

int main() {
    int n;
    int count=0;
    scanf("%d", &n);
  int flag1=0;
    int flag2=0;
    for(int i=2;i<=n-2;i++) {
         flag1=1;
        for(int j=2;j*j<=i;j++) {
            if(i%j==0) {
                flag1=0;
                break;
            }
        }
        if(flag1) {
             flag2=1;
            for(int j=2;j*j<=i+2;j++) {
                if((i+2)%j==0) {
                    flag2=0;
                    break;
                }
            }
            if(flag2){
           count++;     
              } 
        }
    }
    printf("%d", count);
    return 0;
}
