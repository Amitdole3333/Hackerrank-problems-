#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
  
int main() {
int n;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<=n-1;i++){
   scanf("%d",&a[i]);
    }
        // int min_index=0;
     for(int i=0;i<=n-2;i++){
  if(a[i+1]<a[i]){
     printf("Not Sorted");
      return 0;
  }
     }
        printf("Sorted");
    return 0;
}
