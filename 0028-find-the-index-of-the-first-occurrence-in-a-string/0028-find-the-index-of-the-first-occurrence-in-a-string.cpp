#include <string>

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay_len = haystack.length();
        int needle_len = needle.length();

        // If needle is empty, return 0
        if (needle_len == 0)
            return 0;

        // Iterate through haystack
        for (int i = 0; i <= hay_len - needle_len; ++i) {
            int j;
            // Check if needle is found starting at index i in haystack
            for (j = 0; j < needle_len; ++j) {
                if (haystack[i + j] != needle[j])
                    break;
            }
            // If needle is found, return its starting index
            if (j == needle_len)
                return i;
        }

        // If needle is not found, return -1
        return -1;
    }
};
