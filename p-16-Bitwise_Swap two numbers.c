#include <stdio.h>

int main() {

   int A,B;
    scanf("%d",&A);
    scanf("\n%d",&B);
    A=A^B;
    B=A^B;
    A=A^B;
    printf("%d",A);
     printf("\n%d",B);
    return 0;
}