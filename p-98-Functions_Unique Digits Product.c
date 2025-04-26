#include <stdio.h>

int find_unique_digit_product(int n) {
    if (n == 0) {
        return 0;  
    }

    if (n < 0) {
        return 0;  
    }

    int temp = n;
    int prdt = 1;

    while (temp != 0) {
        int current_digit = temp % 10;  
        temp = temp / 10;              

        
        int is_unique = 1;  
        int check_temp = temp;

        while (check_temp != 0) {
            int check_digit = check_temp % 10;
            check_temp = check_temp / 10;

            if (check_digit == current_digit) {
                is_unique = 0;  
                break;
            }
        }

        
        if (is_unique) {
            prdt = prdt * current_digit;
        }
    }

    return prdt;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}