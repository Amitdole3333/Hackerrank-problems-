#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   int temp=n;
   int i=0;
   int factorial=1;
   int sum=0;
   while(temp!=0){
      i=0;
      factorial=1;
       i=temp%10;
       temp=temp/10;
      for(int j=1;j<=i;j++){
      factorial=factorial*j;
      }
      sum=sum+factorial;
    //   printf("%d\n",factorial);
       
   }
//   printf("%d",sum);
     if(sum==n){
         printf("YES");
     }
     else{
         printf("NO");
     }

return 0;
}