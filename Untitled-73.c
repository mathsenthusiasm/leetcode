#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Helper function to expand around center and return palindrome length
int expandAroundCenter(const char *s, int left, int right) {
    while (left >= 0 && right < strlen(s) && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1; // Length of palindrome
}

// Main function to find the longest palindromic substring
char* longestPalindrome(char *s) {
    int len = strlen(s);
    if (len < 1) return "";

    int start = 0, end = 0;

    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(s, i, i);     // Odd length
        int len2 = expandAroundCenter(s, i, i + 1); // Even length
        int max_len = len1 > len2 ? len1 : len2;

        if (max_len > end - start) {
            start = i - (max_len - 1) / 2;
            end = i + max_len / 2;
        }
    }

    int result_len = end - start + 1;
    char *result = (char*)malloc(result_len + 1);
    strncpy(result, s + start, result_len);
    result[result_len] = '\0'; // Null-terminate the string

    return result;
}
