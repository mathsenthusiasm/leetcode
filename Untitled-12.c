#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxArea(int height[], int n) {
    int left = 0;
    int right = n - 1;
    int max_area = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int width = right - left;
        int area = h * width;

        if (area > max_area) {
            max_area = area;
        }

        // Move the shorter line inward
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(height) / sizeof(height[0]);

    int result = maxArea(height, n);
    printf("Maximum water container area: %d\n", result);

    return 0;
}
