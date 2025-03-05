class Solution {
public:
    long long coloredCells(int n) {
        long long cnt = 1;
        for(int i=1;i<=n;i++){
            long long newcell = 4*(i-1);
            cnt+=newcell;
        }
        return cnt;
    }
};