#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k >= n

    // Reverse the entire array
    reverse(arr, 0, n - 1);
    
    // Reverse the first K elements
    reverse(arr, 0, k - 1);
    
    // Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n;
    scanf("%d", &n); // Read size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read array elements
    }

    int k;
    scanf("%d", &k); // Read number of positions to rotate

    // Rotate the array in-place
    rotateArray(arr, n, k);

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}