class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minoperatio = 0;
        int whitecnt = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W')
                whitecnt++;
        }
        minoperatio = whitecnt;

        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'W')
                whitecnt--; // Outgoing block
            if (blocks[i] == 'W')
                whitecnt++; // Incoming block
            minoperatio = min(minoperatio, whitecnt);
        }
        return minoperatio;
    }
};