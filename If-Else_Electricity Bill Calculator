#include <stdio.h>

int main() {

    float n;
    scanf("%f",&n);
    if(n==0){
        printf("The electricity bill is: %0.2f.",n);
    }
   else if(n>0 && n<=100){
        printf("The electricity bill is: %0.2f.",n*5 - 0.10*n*5);
    }
    else if(n>100 && n<=200){
            printf("The electricity bill is: %0.2f.", 500 + (n-100)*7 - 0.10*(500 + (n-100)*7));
        }
        else if(n>200 && n<=300 ) {
            printf("The electricity bill is: %0.2f.",1200 + (n-200)*7);
        }
    else if( n>300){
        printf("The electricity bill is: %0.2f.",1900 + (n-300)*10);
    }
    else{
        printf("Invalid Input!");
    }
    
    return 0;
}