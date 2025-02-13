#include <stdio.h>

int main() {

       float x;
    scanf("%f",&x);
    if(x>=0 && x<=250000){
        printf("%.2f",0.00);
    }
    else if(x>250000 && x<=500000){
        printf("%.2f",(x-250000)*0.05);
    }
    else if(x>500000 && x<=1000000){
        printf("%.2f",12500+(x-500000)*0.20);
    }
    else if(x>1000000){
        printf("%.2f",12500+100000+(x-1000000)*0.30);
    }
    else{
        printf("INVALID");
    }
    return 0;
}