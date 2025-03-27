#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements
    }

    int largest = arr[0];
    int secondLargest = -2147483648; // Initialize to the smallest possible integer

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Check if a valid second largest element exists
    return (secondLargest == -2147483648) ? -1 : secondLargest;
}

int main() {
    int n;

    // Reading the number of elements
    printf("");
    scanf("%d", &n);

    int arr[n];
    printf("", n);

    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSecondLargest(arr, n);

    // Output the second largest element or -1
    printf("%d\n", result);

    return 0;
}
