class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i < n; i++)
        {
            if (isPrime[i])
            {
                for (int m = i * i; m < n; m += i)
                {
                    isPrime[m] = false;
                }
            }
        }
        int cnt = 0;
        for (bool p:isPrime)
        {
            if (p)
                cnt++;
        }
        return cnt;
    }
};