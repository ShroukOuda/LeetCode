public class Solution {
    public int MaxArea(int[] height) {
        int area = 0;
        int l = 0;
        int r = height.Length - 1;
        while (l < r)
        {   
            area = Math.Max(area, (r - l) * Math.Min(height[l], height[r]));
            if (height[r] <= height[l])
                r--;
            else
                l++;
        }
        return area;
    }
}