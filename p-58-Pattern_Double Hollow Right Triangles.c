#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>=2){
      for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==n){
               printf("*");
            }
           else{
              printf(" ");
           }
       }
          for(int k=1;k<=2*(n-i+1)-2;k++){
         printf(" ");
          }
           for(int j=1;j<=i;j++){
                       if(j==1 || j==i || i==n){
               printf("*");
            }
           else{
              printf(" ");
           }
       }
          printf("\n");
    }  
    }
    else{
     printf("Shape Not Possible");
    }
    
    return 0;
}