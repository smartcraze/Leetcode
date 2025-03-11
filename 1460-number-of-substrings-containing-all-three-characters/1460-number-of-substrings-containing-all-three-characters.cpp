class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> count = {{'a', 0}, {'b', 0}, {'c', 0}};
        int left = 0, result = 0;

        for (int right = 0; right < s.size(); ++right) {
            count[s[right]]++;

            // Check if the window is valid (all three characters present)
            while (count['a'] > 0 && count['b'] > 0 && count['c'] > 0) {
                result += s.size() - right; // Add all possible substrings
                count[s[left]]--;
                left++;
            }
        }

        return result;
    }
}

;