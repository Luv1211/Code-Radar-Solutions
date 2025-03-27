#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int N, int K) {
    K = K % N;  // Optimize rotations
    reverse(arr, 0, N - 1);       // Step 1: Reverse the entire array
    reverse(arr, 0, K - 1);       // Step 2: Reverse the first K elements
    reverse(arr, K, N - 1);       // Step 3: Reverse the rest
}

int main() {
    int N, K;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations: ");
    scanf("%d", &K);

    rotateArray(arr, N, K);

    printf("Rotated Array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

