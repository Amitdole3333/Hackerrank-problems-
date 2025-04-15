#include <stdio.h>
int prime_factor_digits(int i){
    int temp2=i;
    int sum=0;
    while(temp2!=0){
        int i=temp2%10;
         sum=sum+i;
        temp2=temp2/10;
    }
    return sum;
}

int sum_prime_factors(int n){
    
    int temp1=n;
    int sum=0;
    for(int i=2;i<=n/2;i++){
       while(temp1%i==0){
           sum=sum+prime_factor_digits(i);
           temp1=temp1/i;
       }
    }
    return sum;
}
int sum_of_digits(int n){
    int temp =n;
    int sum=0;
    while(temp!=0){
        int i=temp%10;
        temp=temp/10;
        sum=sum+i;
    }
    return sum;
}

int is_smith_number(int n) {
   
     int sum_digits=sum_of_digits(n);
    int  sum_factors =sum_prime_factors(n);
    if(sum_digits==sum_factors){
        return 1;
    }
    else{
        return 0;
    }

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}