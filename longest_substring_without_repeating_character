#include <stdio.h>
#include <string.h>
int isUnique(char str[], int start, int end) {
    // Check if characters between start and end are unique
    int visited[256] = {0}; // ASCII character map

    for (int i = start; i <= end; i++) {
        if (visited[(int)str[i]])
            return 0; // Found repeating character
        visited[(int)str[i]] = 1;
    }
    return 1; // All characters are unique
}
int longestUniqueSubstring(char str[]) {
    int n = strlen(str);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isUnique(str, i, j)) {
                int len = j - i + 1;
                if (len > maxLen)
                    maxLen = len;
            }
        }
    }
    return maxLen;
}
int main() {
    char str[] = "abcabcbb";
    int result = longestUniqueSubstring(str);
    printf("Length of longest substring without repeating characters: %d\n", result);
    return 0;
}
