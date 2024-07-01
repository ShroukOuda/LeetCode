class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for (auto& str:strs) {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());
            mp[sorted_str].push_back(str);
        }
        vector<vector<string>> res;
        for (auto& pair:mp)
            res.push_back(pair.second);
        return res;
    }
};