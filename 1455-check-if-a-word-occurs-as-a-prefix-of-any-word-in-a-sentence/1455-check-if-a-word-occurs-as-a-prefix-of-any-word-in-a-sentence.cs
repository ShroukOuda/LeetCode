public class Solution {
    public int IsPrefixOfWord(string sentence, string searchWord) {
         string[] arr = sentence.Split(' ');
         for (int i = 0; i < arr.Length; i++)
         {
             if (arr[i].StartsWith(searchWord))
                 return i + 1;
         }
        return -1;
    }
}