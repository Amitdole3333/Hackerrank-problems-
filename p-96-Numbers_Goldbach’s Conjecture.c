#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int flag=0;
    int k=0;
    int flag1=0;
    if(n<4 || n%2!=0){
      printf("No Solution");
        return 0;
    }
    
    for(int i=2;i<=n;i++){
        flag=0;
     for(int j=2;j*j<=i;j++){
         if(i%j==0){
          flag=1;
             break;
         }
     }
        if(flag==0){
            flag1=0;
            k=0;
            k=n-i;
            for(int l=2;l*l<=k;l++){
               if(k%l==0){
                   flag1=1;
                   break;
               }
            }
            if(flag1==0){
                printf("%d %d",i,k);
                return 0; 
            }
        }
           
    }
    printf("No solution");
   

}