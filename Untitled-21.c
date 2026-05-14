#include <stdio.h>

int findSingle(int arr[], int n) {
    int result = 0;

    // Loop through all bits (32 bits for int)
    for (int i = 0; i < 32; i++) {
        int sum = 0;
        int x = (1 << i);

        // Count number of elements with i-th bit set
        for (int j = 0; j < n; j++) {
            if (arr[j] & x)
                sum++;
        }

        // If bit count is not multiple of 3, set that bit in result
        if (sum % 3 != 0)
            result |= x;
    }

    return result;
}

int main() {
    int arr[] = {2, 2, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The element that appears once is: %d\n", findSingle(arr, n));
    return 0;
}
