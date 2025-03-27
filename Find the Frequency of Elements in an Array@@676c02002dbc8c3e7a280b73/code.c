#include <stdio.h>

int main() {
    int n;

    // Reading the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Array to track if an element is already counted
    int counted[n];
    for (int i = 0; i < n; i++) {
        counted[i] = 0; // Initialize all elements as not counted
    }

    // Calculate frequency of each unique element
    for (int i = 0; i < n; i++) {
        if (counted[i] == 0) { // Proceed if element is not counted
            int freq = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    freq++;
                    counted[j] = 1; // Mark duplicate as counted
                }
            }
            printf("%d %d\n", arr[i], freq); // Output element and frequency
        }
    }

    return 0;
}

