class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double max_avg = 0;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max_avg = sum/k;

        for(int i=k;i<n;i++){
            sum+= nums[i] - nums[i-k];
            max_avg = max(max_avg,sum/k);
        }
        return max_avg;

        
    }
};