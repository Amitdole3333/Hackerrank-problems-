#include <stdio.h>

int isPrime(int N) {
    if (N < 2) return 0;
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d\n", n);
        return 0;
    }
    int d = 1;
    while (1) {
        if (n - d >= 2 && isPrime(n - d)) {
            printf("%d\n", n - d);
            break;
        }
        if (isPrime(n + d)) {
            printf("%d\n", n + d);
            break;
        }
        d++;
    }
    return 0;
}
