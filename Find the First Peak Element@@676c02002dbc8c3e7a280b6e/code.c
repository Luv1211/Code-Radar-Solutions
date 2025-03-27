#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Check boundary cases for first element
    if (n >= 1 && arr[0] > arr[1]) {
        return arr[0];
    }

    // Traverse the array from the second element to the second last
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check boundary case for the last element
    if (n > 1 && arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // If no peak element is found
    return -1;
}

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
  

    return 0;
}
