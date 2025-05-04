#include <stdio.h>

  int searchArray(int a[],int n,int target){
    for(int i=0;i<=n-1;i++){
    if(a[i]==target){
        return i;
    }
    }   
      return -1;
  }

int main() {

  int n;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<=n-1;i++){
         scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
   int result= searchArray(a,n,target);
    printf("%d",result);
    return 0;
}