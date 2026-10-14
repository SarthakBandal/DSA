
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        string ans = "";
        int remaining = sum;

        for (int i = 0; i < num; i++) {
            int digit = min(9, remaining);
            ans += to_string(digit);
            remaining -= digit;
        }

        return ans;
    }
};
