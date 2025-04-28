#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int size = 2 * n - 1;  

    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
           
            int min_distance = i < j ? i : j; 
            min_distance = min_distance < (size - 1 - i) ? min_distance : (size - 1 - i);
            min_distance = min_distance < (size - 1 - j) ? min_distance : (size - 1 - j);

            
            int value = n - min_distance;

        
            printf("%d ", value);
        }
        printf("\n");  
    }

    return 0;
}