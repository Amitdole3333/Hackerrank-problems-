#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=i-1,y=1;
        for(int k=1;k<=n-i;k++){
         printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==j){
                printf("0");
            }
            else if(j<i){
                printf("%d",x);
                --x;
            }
                else if(j>i){
                    printf("%d",y);
                    ++y;
                }
            }
            printf("\n");
        }
    return 0;
}