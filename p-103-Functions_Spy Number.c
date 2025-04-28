#include <stdio.h>

int  sum_of_digits(int n){
    int sum=0;
    int temp=n;
    while(temp!=0){
      int i=temp%10;
        temp=temp/10;
        sum=sum+i;
    }
    return sum;
}

int prdt_of_digits(int n)
{
     int prdt=1;
    int temp=n;
    while(temp!=0){
     int i=temp%10;
        temp=temp/10;
        prdt=prdt*i;
    }
    return prdt;
}


int is_spy_number(int n) {
   int sum_digit=  sum_of_digits(n);
   int prdt_digits= prdt_of_digits(n);
    if(sum_digit==prdt_digits){
     return 1;
    }
    else{
       return 0;
         }
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_spy_number(n));
    return 0;
}