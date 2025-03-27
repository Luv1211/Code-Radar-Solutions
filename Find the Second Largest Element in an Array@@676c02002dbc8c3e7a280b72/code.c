#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; // Not enough elements
    }

    int largest = arr[0], secondLargest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int n;

    // Reading the number of elements
  
    scanf("%d", &n);

    int arr[n];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findSecondLargest(arr, n);

    // Output the second largest element or -1
    printf("%d\n", result);

    return 0;
}

