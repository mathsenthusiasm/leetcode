#include <stdio.h>
#include <stdlib.h> // for qsort

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int countDistinct(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    int count = 1; // first element is always distinct

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1])
            count++;
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 1, 3, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = countDistinct(arr, n);
    printf("Number of distinct elements: %d\n", result);

    return 0;
}
