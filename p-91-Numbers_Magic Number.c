#include <stdio.h>

int main() {
int n;

   scanf("%d",&n);

   int temp=n;
   int sum=0;

    while(temp>9){
        
        sum=0;
 while(temp!=0){

      sum=sum+temp%10;
      temp/=10;
      

   }
   temp=sum;
}


  if(temp==1){

      printf("%d is a magic number",n);

  }

  else{

      printf("%d is not a magic number",n);

  }
    return 0;
}