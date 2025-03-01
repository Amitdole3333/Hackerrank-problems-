#include <stdio.h>
int main() {
   int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=(a-b);
    d=(c>>31) & 1;
    int number= a*(d) + b*(1-d);
    printf("%d",number);
        
    return 0;
}