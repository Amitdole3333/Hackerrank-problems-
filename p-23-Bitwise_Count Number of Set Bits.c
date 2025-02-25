#include <stdio.h>
#include<math.h>

int main() {
  int n,count=0;
    scanf("%d",&n);
    if((n & 1<<0)!=0){
        count=count + 1;
    }
     if((n & 1<<1)!=0){
        count=count +1;
    }
    if((n & 1<<2)!=0){
        count=count +1;
    }
    if((n & 1<<3)!=0){
        count=count +1;
    }
    printf("%d",count);
    return 0;
}