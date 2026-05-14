#include <stdio.h>

int main() {
    int arr[100], n, i, j, count = 0;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int visited[100] = {0}; // Keeps track of already counted duplicates

    for (i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int dupCount = 1;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                dupCount++;
                visited[j] = 1;
            }
        }

        if (dupCount > 1) {
            count++;
        }
    }

    printf("Total number of duplicate elements = %d\n", count);

    return 0;
}
