#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
  // if (n < 2) return -1;

    int first = arr[0];
    int second = -1;

   
    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != first) {
            if (second == -1 || arr[i] > second) {
                second = arr[i];
            }
        }
    }

    return second;
}
  
   

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}