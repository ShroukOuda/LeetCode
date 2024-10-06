public class Solution {
    public bool AreSentencesSimilar(string sentence1, string sentence2) {
        string[] words1 = sentence1.Split(' ');
        string[] words2 = sentence2.Split(' ');

        int len1 = words1.Length;
        int len2 = words2.Length;

        int prefixMatch = 0;
        int suffixMatch = 0;
        while (prefixMatch < len1 && prefixMatch < len2 && words1[prefixMatch] == words2[prefixMatch]) {
            prefixMatch++;
        }

        while (suffixMatch < len1 - prefixMatch && suffixMatch < len2 - prefixMatch &&
               words1[len1 - 1 - suffixMatch] == words2[len2 - 1 - suffixMatch]) {
            suffixMatch++;
        }

        return prefixMatch + suffixMatch >= Math.Min(len1, len2);
    }
}
