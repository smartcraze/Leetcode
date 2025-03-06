class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for (const auto num : nums) {
            mpp[num]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (mpp[nums[i]] !=1) {
                return true;
                break;
            }
        }
        return false;
    }
};