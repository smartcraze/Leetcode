class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        
        // Start with the first string as the common prefix
        string prefix = strs[0];
        
        // Compare the prefix with each string in the list
        for (int i = 1; i < strs.size(); ++i) {
            // Update the prefix by comparing it with each string
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.size() - 1);
                if (prefix.empty()) {
                    return "";
                }
            }
        }
        
        return prefix;
    }
};
