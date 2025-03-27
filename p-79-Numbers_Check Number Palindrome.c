#include <stdio.h>

int main() {

  long int n;
    scanf("%ld",&n);
    long temp=n;
    long rev=0;
    while(n!=0){
        long last_digit=n%10;
        rev=rev*10 +last_digit;
        n=n/10;
    }
    if(temp==rev){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}