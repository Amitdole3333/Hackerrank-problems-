#include <stdio.h>

int main() {

   long int n; 
    scanf("%ld", &n);

    if (n == 0) {
        printf("0");
    }
   
    else {
      int position = 1;
      long int N = n & -n; 
        while (N > 1) {
            N >>= 1;
            position++;
        }
        printf("%d", position);
    }
 
    return 0;
}
