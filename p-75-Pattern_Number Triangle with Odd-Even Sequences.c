#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x=2;
         int y=1;
        for(int j=1;j<=i;j++){
            if(i%2==0){
             
                printf("%d ",x);
                x+=2;
            }
            else if(i%2!=0){
            
                printf("%d ",y);
                y+=2;
            }
        }
        printf("\n");
    }
    return 0;
}