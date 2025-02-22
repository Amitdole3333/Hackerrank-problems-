#include <stdio.h>

int main() {

   int N;
    scanf("%d",&N);
    if((N&1)==0){
        printf("Even");
    }
    else if((N&1)==1){
         printf("Odd");
    }
    return 0;
}