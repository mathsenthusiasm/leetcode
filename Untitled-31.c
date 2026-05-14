int lengthOfLongestSubstring(char* s) {
    int map[128] = {0};  // ASCII character frequency
    int left = 0, right = 0;
    int maxLen = 0;

    while (s[right] != '\0') {
        char c = s[right];
        map[(int)c]++;

        // If character is repeated, shrink window from the left
        while (map[(int)c] > 1) {
            map[(int)s[left]]--;
            left++;
        }

        // Update max length if current window is longer
        int windowLen = right - left + 1;
        if (windowLen > maxLen) {
            maxLen = windowLen;
        }

        right++;
    }

    return maxLen;
}
