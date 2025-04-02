#include <stdio.h>
#include<stdbool.h>
int main() {

    int n;
    scanf("%d",&n);
    int flag=0;
    int P1=0,P2=0; 
    // if(n>=3){
      for(int i=n+1;;i++){
          flag=0;
     for(int j=2;j<n+1;j++){
         
         if(i%j==0){
             flag=1;
             break;
         }
     }
        if(flag==0){
            P1=i;
           
            break;
        }
    }
    bool second_value=true;
    for(int i=n-1;i>=2;i--){
        second_value=true;
    for(int j=2;j<i-1;j++){
        
        if(i%j==0){
           second_value=false;
            break;
        }
    }
        if(second_value==true){
            P2=i;
            
            break;
        }
    }
    int diff=P1-P2;
     printf("%d",diff);
      
    // }
    
    // else if(n==2){
    //     printf("3");
    // }
    // else{
    //     printf("2");
    // }
    
    return 0;
}