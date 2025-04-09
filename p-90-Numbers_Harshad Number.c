#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;

   scanf("%d",&n);

   int temp=n;

   int i=0;

   int sum=0;

   while(temp!=0){

       i=0;

       i=temp%10;

       temp=temp/10;

       sum=sum+i;

   }

  if(n%sum==0){

      printf("%d is a harshad number",n);

  }

  else{

      printf("%d is not a harshad number",n);

  }
    return 0;
}
