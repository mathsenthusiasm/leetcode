#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}
int maxAreaBruteForce(int height[], int n) {
    int max_area = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int h = min(height[i], height[j]);
            int width = j - i;
            int area = h * width;

            if (area > max_area) {
                max_area = area;
            }
        }
    }

    return max_area;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);

    int result = maxAreaBruteForce(height, n);
    printf("Maximum water container area (Brute Force): %d\n", result);

    return 0;
}
