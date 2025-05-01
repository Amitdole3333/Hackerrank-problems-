#include <stdio.h>
  
 int  evenCount(int size,int a[]){
   int count=0;
  for(int i=0;i<=size-1;i++){
   if(a[i]%2==0){
   count++;
   }
  }
    return count;
}

int oddCount(int size,int a[]){
    int count=0;
    for(int i=0;i<=size-1;i++){
        if(a[i]%2!=0){
           count++;
        }
    }
    return count;
}
int main() {
  int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++){
      scanf("%d",&a[i]);
    }
 int even=evenCount(size,a);
    int odd=oddCount(size,a);
    printf("%d %d",even,odd);
    return 0;
}