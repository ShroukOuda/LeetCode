public class Solution {
    public int RemoveDuplicates(int[] nums) {
        Dictionary<int, int> Dict = new Dictionary<int, int>();
        foreach (var item in nums)
        {
            if (Dict.ContainsKey(item))
                Dict[item]++;
            else
                Dict[item] = 1;
        }
        int i = 0;
        foreach (var key in Dict.Keys)
        {
            nums[i] = key;
            i++;
        }
        return Dict.Count;
    }
}