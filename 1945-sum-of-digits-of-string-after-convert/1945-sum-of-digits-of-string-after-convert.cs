public class Solution {
    public static int SumOfDigits(int n) {
        int sum = 0;
        while(n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    public int GetLucky(string s, int k) {
        int sum = 0;
        foreach (char c in s)
        {
            int value = c - 96;
            sum += SumOfDigits(value);
        }
        while (k > 1)
        {
            sum = SumOfDigits(sum);
            k--;
        }
        return sum;
    }
}