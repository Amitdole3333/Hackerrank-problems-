#include <stdio.h>

int is_evil_number(int n) {
   int temp=n;
    int count=0;
    while(temp!=0){
        if(temp%2!=0){
            ++count;
            temp=temp/2;
        }
        else{
            temp=temp/2;
        }
    }
    if(count%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}