class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even=0,odd=0;
        for(int num:position){
            if(num%2==0)even++;
            else odd++;
        }
        return min(odd,even);
        
    }
};