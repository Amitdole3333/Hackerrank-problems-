
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = n; i >=2; i--) {
            printf("%d ", 2*i-1); 
    }
    if(n>=1){
        printf("1");
    printf(".");
}
    
    return 0;
}