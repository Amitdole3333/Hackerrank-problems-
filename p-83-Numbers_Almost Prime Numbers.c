#include <stdio.h>

int main() {
    int n, count1 = 0;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        int temp = k, count = 0;

        for (int i = 2; i * i <= temp; i++) {
            while (temp % i == 0) {
                count++;
                temp /= i;
            }
        }

        if (temp > 1) {
            count++;
        }

        if (count == 2) {
            count1++;
        }
    }

    printf("%d\n", count1);
    return 0;
}
