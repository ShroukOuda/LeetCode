class Solution {
public:
    int minLength(string s) {
         stack<char> stk;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (!stk.empty() && stk.top() == 'A')
                    stk.pop();
                else 
                    stk.push(s[i]);
            }
            else if (s[i] == 'D')
            {
                if (!stk.empty() && stk.top() == 'C')
                    stk.pop();
                else
                    stk.push(s[i]);
            }
            else
                stk.push(s[i]);
        }
        return stk.size();
    }
};