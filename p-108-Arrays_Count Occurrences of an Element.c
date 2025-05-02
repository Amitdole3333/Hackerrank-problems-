#include <stdio.h>
   

int countArray(int size,int a[],int target) {
int count=0;
for(int i=0;i<=size-1;i++){
  if(a[i]==target){
  count++;
  }
}
return count;
}
int main(){

  int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++){
      scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
   int count=countArray(size,a,target);
printf("%d",count);
    return 0;
}