#include <stdio.h>
  
 int   maxArray(int size,int a[]){
    int max=a[0];
  for(int i=0;i<=size-1;i++){
   if(a[i]>max){
    max=a[i];
   }
  }
    return max;
}

int minArray(int size,int a[]){
    int min=a[0];
    for(int i=0;i<=size-1;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
int main() {
  int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<=size-1;i++){
      scanf("%d",&a[i]);
    }
 int max= maxArray(size,a);
    int min=minArray(size,a);
    printf("%d %d",max,min);
    return 0;
}