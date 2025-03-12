#include <stdio.h>

int main() {

    int n,j=1;
    scanf("%d",&n);
    if(n>=2){
         printf("<");
        for(int i=1;i<=n-1;i++){
        printf("%d ",j);
        j=j*2;
    }
    printf("%d",j);
    printf(">");
}
    else if(n==1){
    printf("<1>");
    }
    
    return 0;
}