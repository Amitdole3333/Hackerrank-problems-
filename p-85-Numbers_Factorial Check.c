#include <stdio.h>

int main() {

     long long int n;
    long i;
    int flag=0;
    scanf("%lld",&n);
     
    // if(n==1){
    //  printf("1");
    //     return 0;
    // }
    long long factorial=1;
    for(i=1;factorial<=n;i++)
    {  
     factorial=factorial*i;
        if(n==factorial){
            printf("%ld",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("NO");
    }
      
    return 0;
}