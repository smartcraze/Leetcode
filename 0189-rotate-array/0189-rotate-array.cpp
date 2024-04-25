class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // Allocate a temporary vector to store the elements to be rotated
        vector<int> temp(nums.begin() + n - k, nums.end());

        // Shift the elements to the right by k positions
        for (int i = n - 1; i >= k; --i) {
            nums[i] = nums[i - k];
        }

        // Put back the elements from temp to nums
        for (int i = 0; i < k; ++i) {
            nums[i] = temp[i];
        }
    }
};