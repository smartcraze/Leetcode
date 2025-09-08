class Solution {
    bool containZero(int num) {
        while (num) {
            int digit = num % 10;
            if (digit == 0) return true;
            num /= 10;
        }
        return false;
    }

public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res;
        for (int i = 1; i < n; i++) {
            int num1 = i;
            int num2 = n - i;

            if (!containZero(num1) && !containZero(num2)) {
                res.push_back(num1);
                res.push_back(num2);
                break;
            }
        }
        return res;
    }
};