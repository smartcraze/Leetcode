class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        int successor = -1;

        // Find the pivot
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                pivot = i - 1;
                break;
            }
        }

        // If pivot is still -1, the sequence is already the largest permutation
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the successor
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                successor = i;
                break;
            }
        }

        // Swap pivot and successor
        swap(nums[pivot], nums[successor]);

        // Reverse the sequence after the pivot
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};
