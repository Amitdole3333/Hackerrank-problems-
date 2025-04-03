#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
   int count=0;
    int i;
    int original=n;
    int temp=n;
    int sum=0;
    while(n!=0){
        n=n/10;
        ++count;
    }
    while(temp!=0){
        int j=0;
        int k=1;
         j=temp%10;
        //  printf("\nj=%d\n",j);
         i=0;
        while(i<count){
            ++i;
            k=k*j;
        }
        // printf("\n%d\n",k);
        sum=sum+k;
        temp=temp/10;
    }
    if(sum==original){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}