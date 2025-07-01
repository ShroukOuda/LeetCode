public class Solution {
    public int PossibleStringCount(string word) {
        char flag = '\0';
        int count = 1;
        
        foreach (char c in word)
        {
            if (c == flag)
                count++;
            flag = c;
        }
        return count;
    }
}