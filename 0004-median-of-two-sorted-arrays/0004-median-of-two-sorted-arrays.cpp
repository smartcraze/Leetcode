class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        if (n == 0 && m == 0) {
            throw invalid_argument("Both input arrays are empty.");
        }

        vector<int> merge;
        merge.reserve(n + m);

        merge.insert(merge.end(), nums1.begin(), nums1.end());
        merge.insert(merge.end(), nums2.begin(), nums2.end());

        sort(merge.begin(), merge.end());

        int total = n + m;
        int middle = total / 2;

        if (total % 2 != 0) {
            return merge[middle];
        } else {
            return (merge[middle - 1] + merge[middle]) / 2.0;
        }
    }
};
