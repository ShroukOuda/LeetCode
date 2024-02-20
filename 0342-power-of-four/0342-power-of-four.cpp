class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;
        double res = log10(n) / log10(4);
        return res == int(res);
    }
};