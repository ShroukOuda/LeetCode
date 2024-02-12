class Solution {
public:
    double myPow(double x, int n) {
        // Base case: x^0 is always 1
        if (n == 0) {
            return 1.0;
        }

        // Recursive case for positive exponent
        if (n > 0) {
            double halfPow = myPow(x, n / 2);
            return (n % 2 == 0) ? halfPow * halfPow : x * halfPow * halfPow;
        } else { // Recursive case for negative exponent
            return 1.0 / (x * myPow(x, -(n + 1)));
        }
    }
};
