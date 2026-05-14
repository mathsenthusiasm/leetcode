#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int)); // Allocate memory for result
    *returnSize = 2; // We're returning 2 indices

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // Return as soon as we find the pair
            }
        }
    }

    return NULL; // Should never hit this if input guarantees a solution
}

int main() {
    int nums[] = {2, 7, 11, 15}; // Example input
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize; // Variable to store size of result
    int* result = twoSum(nums, numsSize, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        // Optionally print the numbers themselves
        printf("Numbers: [%d, %d]\n", nums[result[0]], nums[result[1]]);
        free(result); // Don't forget to free the memory
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
