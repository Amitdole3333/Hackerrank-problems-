#include <stdio.h>

int main() {

   long int n; 
    scanf("%ld", &n);

    if (n == 0) {
        printf("1");
    }
    else if(n == -1) {
        printf("-1");
    }
   
    else {
      int position = 1;
     // long int N = n & -n; 
        while (n&1) {
            n>>= 1;
            position++;
        }
        printf("%d", position);
    }
 
    return 0;
}
