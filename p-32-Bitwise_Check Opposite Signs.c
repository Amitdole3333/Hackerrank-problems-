#include <stdio.h>

int main() {

    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a>>31 & 1;
    d=b>>31 & 1;
    if(c^d){
        printf("Yes");
}
    else{
        printf("No");
    }
    return 0;
}