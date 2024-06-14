class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (int num : nums)
        {
            mp[num]++;
            if (mp[num] > 1)
                return true;
        }
        return false;
    }
};