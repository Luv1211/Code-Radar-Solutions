#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n
    int temp[k];

    // Copy the last K elements to a temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the rest of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Place the temp elements at the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    scanf("%d", &n); // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int k;
    scanf("%d", &k); // Read number of positions to rotate

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print rotated array
    }

    return 0;
}