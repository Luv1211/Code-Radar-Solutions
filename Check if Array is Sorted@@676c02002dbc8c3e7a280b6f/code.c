#include <stdio.h>

int main() {
    int n;

    // Reading the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if the array is sorted
    int is_sorted = 1; // Assume the array is sorted initially
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            is_sorted = 0; // Found a case where the array is not sorted
            break;
        }
    }

    if (is_sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
