class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        bool neg = false;
        if ((dividend < 0 && divisor > 0) ||(dividend > 0 && divisor < 0)) {
            neg = true;
        }
        long long a = dividend;
        long long b = divisor;
        if (a < 0)
            a = -a;
        if (b < 0)
            b = -b;
        long long ans = 0;
        for (int i = 31; i >= 0; i--) {
            if ((b << i) <= a) {
                a = a - (b << i);
                ans = ans + (1LL << i);
            }
        }
        if (neg)
            ans = -ans;
        return ans;
    }
};
