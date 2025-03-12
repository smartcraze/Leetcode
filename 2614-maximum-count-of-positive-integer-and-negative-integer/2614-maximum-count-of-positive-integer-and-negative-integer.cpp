class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        // Finding the first positive number using binary search
        int firstPos = nums.size();
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > 0) {
                firstPos = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        // Finding the last negative number using binary search
        left = 0, right = nums.size() - 1;
        int lastNeg = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < 0) {
                lastNeg = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Count of negative numbers and positive numbers
        int negCount = lastNeg + 1;
        int posCount = nums.size() - firstPos;

        return max(negCount, posCount);
    }
};
