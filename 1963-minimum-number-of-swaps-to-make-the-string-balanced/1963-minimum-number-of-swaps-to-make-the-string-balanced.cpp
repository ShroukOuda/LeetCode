class Solution {
public:
    int minSwaps(string s) {
        int check = 0;
        int cnt = 0;
        for (char c:s)
        {
            if (c == ']')
            {
                if (check > 0)
                    check--;
                else
                    cnt++;
            }
            else
                check++;
        }
        return cnt % 2 ? (cnt / 2) + 1 : cnt / 2;
    }
};