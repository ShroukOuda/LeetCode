class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0)
            return false;
        double res = log10(n) / log10(3);
        return res == int(res);
    }
};