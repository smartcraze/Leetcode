class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //finding the first zero
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1){
            return ;
        }
        //now putting zeroin the lasat 
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }

        }
        
    }
};