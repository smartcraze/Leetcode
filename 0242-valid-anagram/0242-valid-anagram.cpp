class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;\
        if(s.size()!=t.size())return false;
        for (char ch : s) {
            mpp[ch]++;
        }
        for (char ch : t) {
            mpp[ch]--;
            if (mpp[ch] < 0)
                return false;
        }
        return true;
    }
};