#include <stdio.h>
int main() {
   int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=(a-b);
    d=(c>>31);
    int number= (a&(~d)) | (b&(d));
    printf("%d",number);
        
    return 0;
}