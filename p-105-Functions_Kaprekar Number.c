#include <stdio.h>

int is_kaprekar(int n) {
    int S=n*n;
    int temp=n;
  int count =0;
    while(temp!=0){
      temp=temp/10;
        count++;
    }
//  printf("%d",count);
   int right_part=0;
   int rev=0;
    for(int j=1;j<=count;j++){
        int i=S%10;
        right_part= right_part*10 + i;
        S=S/10;
    }
    // printf("%d",right_part);
    for(int j=1;j<=count;j++){
        int i=right_part%10;
        rev=rev*10 + i;
        right_part=right_part/10;
    }
    
    if((rev+S)==n){
      return 1; 
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}