#include <stdio.h>

int main() {
    int n;

    // Reading the number of elements
    
    scanf("%d", &n);

    int arr[n];
    

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initializing counters
    int evenCount = 0, oddCount = 0;

    // Counting even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Outputting results
    printf("%d %d\n", evenCount, oddCount);

    return 0;
}
