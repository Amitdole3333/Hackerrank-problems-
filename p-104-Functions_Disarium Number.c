#include <stdio.h>
#include<math.h>
int is_disarium_number(int n) {
    // Implement this function
    int temp=n;
//count digits
 int temp1=n;
    int count =0;
while(temp1!=0){
    // int j=temp1%10;
    count++;
    temp1=temp1/10;
}
    //side sum
 int sum=0;
  while(temp>0)
  {
      int i=temp%10;
      sum=sum + pow(i,count);
      count--;
         temp=temp/10;
  }
//   printf("%d",sum);
  if (n==sum){
      return 1;
  }
  else{
      return 0;
  }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}