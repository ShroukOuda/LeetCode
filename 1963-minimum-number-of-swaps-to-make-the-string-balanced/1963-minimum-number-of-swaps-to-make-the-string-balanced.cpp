class Solution {
public:
    int minSwaps(string s) {
        stack <char> stk;
        int cnt = 0;
        for (char c:s)
        {
            if (c == ']')
            {
                if (!stk.empty())
                    stk.pop();
                else
                    cnt++;
            }
            else
                stk.push(c);
        }
        return cnt % 2 ? (cnt / 2) + 1 : cnt / 2;
    }
};