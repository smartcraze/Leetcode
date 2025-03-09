class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int left=0;
        int maxlen = 0;
        for(int right=0;right<s.length();right++){
            if(mpp.count(s[right])){
                left = max(left,mpp[s[right]]+1);
            }
            mpp[s[right]]=right;
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};