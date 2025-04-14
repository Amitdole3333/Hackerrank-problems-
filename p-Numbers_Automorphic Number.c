#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_automorphic(int n) {
    int square = n * n;  
    int temp = n;
    while (temp > 0) {
        if (square % 10 != temp % 10) {
            return 0;  
        }
        square /= 10;
        temp /= 10;
    }
    return 1; 
}

    int main() {
 int n;
    scanf("%d", &n);

    if (is_automorphic(n)) {
        printf("%d is automorphic\n", n);
    } else {
        printf("%d is not automorphic\n", n);
    }
    return 0;
}
