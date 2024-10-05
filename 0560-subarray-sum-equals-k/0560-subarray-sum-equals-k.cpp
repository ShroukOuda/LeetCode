class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    int sum = 0;
    int cnt = 0;
    map<int, int> mp;
    mp[0] = 1;
    for (int n:nums) {
        sum += n;
        cnt += mp[sum - k];
        mp[sum]++;
    }
    return cnt;
    }
};