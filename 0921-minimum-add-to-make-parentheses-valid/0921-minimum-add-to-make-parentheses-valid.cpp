class Solution {
public:
    int minAddToMakeValid(string s) {
        int check = 0;
        int cnt = 0;
        for (char c:s)
        {
            if (c == '(')
                check++;
            else
            {
                if (!check)
                    cnt++;
                else
                    check--;
            }
        }
        return check + cnt;
    }
};