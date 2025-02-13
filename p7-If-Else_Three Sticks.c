#include <stdio.h>

int main() {

       int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a + b <= c || b + c <= a || c + a <= b){
        printf("Lengths: [%d, %d, %d]\n", a,b,c);
        printf("Type: Invalid\n");
         printf("Cannot form a valid shape.");
    }
    else if (a==b && b==c && c==a ){
        printf("Lengths: [%d, %d, %d]\n",a ,b,c);
        printf("Type: Equilateral\n");
         printf("All sides are of the same length.");
    }
    else if (a!=b && b!=c && c!=a ){
        printf("Lengths: [%d, %d, %d]\n",a ,b,c);
        printf("Type: Scalene\n");
         printf("All sides are of different lengths.");
    }
    else if(a<=0 || b<=0 || c<=0){
        printf("Lengths: [%d, %d, %d]\n",a ,b,c);
        printf("Type: Invalid\n");
         printf("Cannot form a valid shape.");
    }
     else {
        printf("Lengths: [%d, %d, %d]\n",a ,b,c);
        printf("Type: Isosceles\n");
         printf("Exactly two sides are equal.");
    }
    
    return 0;
}
