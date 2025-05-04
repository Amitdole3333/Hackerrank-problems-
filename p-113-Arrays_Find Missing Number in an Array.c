#include <stdio.h>

int missingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]); 
    }
    int result = missingNumber(arr, n);
    printf("%d\n", result); 
    return 0;
}
