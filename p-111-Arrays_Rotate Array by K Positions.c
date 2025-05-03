#include <stdio.h>

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    k=k%n;
    for(int j=0;j<=k-1;j++){
     int temp=arr[0];
    for(int i=1;i<=n-1;i++){
    arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    }
   
}



int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}