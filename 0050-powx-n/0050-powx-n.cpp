class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) 
            return 1.0;
        if (n > 0) 
        {
            double halfPow = myPow(x, n / 2);
            return (n % 2 == 0) ? halfPow * halfPow : x * halfPow * halfPow;
        } 
        else 
        { 
            return 1.0 / (x * myPow(x, -(n + 1)));
        }
    }
};
