class Solution {
public:
    bool isprime(int n) {
        if (n<2)
            return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> allprimes;
        while (left <= right) {
            if (isprime(left)) {
                allprimes.push_back(left);
            }
            left++;
        }
        if (allprimes.size() < 2) return {-1, -1};
        int num1 = -1, num2 = -1;
        int minDiff = INT_MAX; // Use a variable to store minimum difference
        
        for (int i = 1; i < allprimes.size(); i++) {
            int diff = allprimes[i] - allprimes[i - 1];
            if (diff < minDiff) {
                minDiff = diff;
                num1 = allprimes[i - 1];
                num2 = allprimes[i];
            }
        }

        return {num1, num2};
    }
};