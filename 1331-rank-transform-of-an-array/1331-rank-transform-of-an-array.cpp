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
        for (int i = 0; i < arr.size(); i++)
        {
            res.push_back(mp[arr[i]]);
        }
        return res;
    }
};