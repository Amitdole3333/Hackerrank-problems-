#include <stdio.h>

int find_most_frequent_digit(int n) {
    if(n==0){
    return 0;
    }
    int max_count =0;
    int num=0;
    for(int i=0;i<=9;i++){
        int temp=n;
        int count=0;
        while(temp>0){
            if(temp%10==i){
                count++;
            }
                temp=temp/10;
      }
        if(count>max_count || (count==max_count && i>num)){
            max_count=count;
            num=i;
        }
    }
    return num;
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}