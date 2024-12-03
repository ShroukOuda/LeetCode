public class Solution {
    public string AddSpaces(string s, int[] spaces) {
        StringBuilder res = new StringBuilder();
        int spaceIndex = 0;
        for (int i = 0; i < s.Length; i++)
        {
           if (spaceIndex < spaces.Length && i == spaces[spaceIndex])
           {
               res.Append(' ');
               spaceIndex++;
           }
               
            res.Append(s[i]);
        }

        return res.ToString();
    }
}