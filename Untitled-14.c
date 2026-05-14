#include <stdio.h>
int maxAscendingSum(int arr[], int n) {
    if (n == 0) return 0;

    int max_sum = arr[0];
    int current_sum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            // Continue ascending
            current_sum += arr[i];
        } else {
            // Sequence breaks, reset
            if (current_sum > max_sum)
                max_sum = current_sum;
            current_sum = arr[i]; // Start new sum
        }
    }

    // Final check after loop
    if (current_sum > max_sum)
        max_sum = current_sum;

    return max_sum;
}

int main() {
    int arr[] = {10, 20, 30, 5, 10, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxAscendingSum(arr, n);
    printf("Maximum ascending subarray sum: %d\n", result);

    return 0;
}
