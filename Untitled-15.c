#include <stdio.h>

int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];  // XOR each element
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, n);
    printf("The unique number is: %d\n", unique);

    return 0;
}
