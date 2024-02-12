class Solution {
public:
    long long reverse(long long x) {
    long long reversed = 0;
    while (x != 0) {
        long long digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    if (reversed > INT_MAX || reversed < INT_MIN)
    return 0;
    return reversed;
    }
};