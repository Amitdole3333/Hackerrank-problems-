#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n); 
    int m=n;
    
    printf("%d", n);

    while (n != 1) {
        if (n<1) {
            n = 1; 
        }
        else if(n%3==0){
            n =n/3;
        }
        else if(n%5==0 && n%3!=0){
            n =n-5;
        }
        else{
          n=5*n;
        }
        
        printf(" -> %d", n);
    }
    if(m<=1){
        printf("\nMax Number: 1");
    }
   else if(m%5==0){
         printf("\nMax Number: %d",m);
    }
    else if(m%3==0){
        int N=m/3;
        if(N%3==0 || N%5==0){
          printf("\nMax Number: %d",m);
        }
        else{
            printf("\nMax Number: %d",5*N);
        }
    }
    else{
         printf("\nMax Number: %d",5*m);
    }
   
    return 0;
}
