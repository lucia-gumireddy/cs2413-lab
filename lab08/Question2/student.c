#include <stdio.h>
#include <string.h>

/*
Question 2: Find the Index of the First Occurrence in a String

Given two strings needle and haystack, return the index of the
first occurrence of needle in haystack, or -1 if needle is not
part of haystack.

Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0

Example 2:
Input: haystack = "leetcode", needle = "leeto"
Output: -1

Note:
- You may use a simple nested-loop solution.
- Do not use library substring search functions.
*/

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    // Edge case: empty needle
    if (m == 0) return 0;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        // Compare substring starting at i
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }

        // If we matched the whole needle
        if (j == m) {
            return i;
        }
    }

    return -1;
}