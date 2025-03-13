#include <stdio.h>

int main() {

    int n,N;
    scanf("%d",&n);
    N=((n<<3)-n)>>1;
    printf("%d",N);
    return 0;
}