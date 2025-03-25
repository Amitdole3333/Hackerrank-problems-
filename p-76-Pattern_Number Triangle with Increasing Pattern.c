#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int num; 
    for (int i=1;i<=n;i++) {
        num=i; 

        for (int j=1;j<=i;j++) {
            printf("%d ",num);
            num+=(n - j);
        }
        printf("\n");
    }
    return 0;
}
