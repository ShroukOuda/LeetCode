class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> mp;
        for (int ele:arr)
        {
            mp[ele] = 0;
        }
        int rank = 1;
        for (auto& [key, value] : mp)
        {
            value = rank++;
        }
        vector<int> res;
        for (int ele:arr)
        {
            res.push_back(mp[ele]);
        }
        return res;
    }
};