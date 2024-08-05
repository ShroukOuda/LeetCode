class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mp;
        for (auto & v : arr) {
            mp[v]++;
        }
        int cnt = 0;
        for (auto & v : arr) {
            if (mp[v] == 1)
                cnt++;
            if (cnt == k)
                return v;
        }
        return "";
    }
};