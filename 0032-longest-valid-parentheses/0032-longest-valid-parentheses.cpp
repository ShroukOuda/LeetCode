class Solution {
public:
    int longestValidParentheses(string s) {
        int close = 0, open = 0, l, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                open++;
            else
                close++;
            if (open == close)
            {
                l = open + close;
                cnt = max(l, cnt);
            }
             else if (close > open)
                close = open = 0;
        }
        open = close = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '(')
                open++;
            else
                close++;
            if (open == close)
            {
                l = open + close;
                cnt = max(l, cnt);
            }
             else if (close < open)
                close = open = 0;
        }
        return cnt;
    }
};