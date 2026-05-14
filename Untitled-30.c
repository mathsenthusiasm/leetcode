#include <stdlib.h>

int lengthOfLongestSubstring(char* s) {
    int* map = (int*)calloc(128, sizeof(int));  // dynamically allocate and zero-initialize

    int left = 0, right = 0;
    int maxLen = 0;

    while (s[right] != '\0') {
        char c = s[right];
        map[(int)c]++;

        while (map[(int)c] > 1) {
            map[(int)s[left]]--;
            left++;
        }

        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
        }

        right++;
    }

    free(map);  // don't forget to free!
    return maxLen;
}
