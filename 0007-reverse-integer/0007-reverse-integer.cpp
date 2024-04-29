class Solution {
public:
    int reverse(int x) {
        int reversed = 0;
        while (x != 0) {
            // Check for overflow
            if (abs(reversed) > INT_MAX / 10) {
                return 0;
            }
            // Get the last digit
            int digit = x % 10;
            x /= 10;

            // Construct the reversed number
            reversed = reversed * 10 + digit;
        }
        return reversed;
    }
};
