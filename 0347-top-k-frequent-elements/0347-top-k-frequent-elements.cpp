class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (auto& num:nums) {
            mp[num]++;
        }
        priority_queue<pair<int, int>> maxHeap;
        vector<int> res;
        for (auto& n:mp) {
            maxHeap.push({n.second, n.first});
        }
        while (!maxHeap.empty() && k--) {
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
}; 