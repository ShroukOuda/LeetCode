#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Frequency map
        unordered_map<int, int> freq_map;
        for (auto& num : nums) {
            freq_map[num]++;
        }

        // Min-heap to store the top k frequent elements
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        for (auto& entry : freq_map) {
            min_heap.push({entry.second, entry.first});
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        // Extract the elements from the heap
        vector<int> res;
        while (!min_heap.empty()) {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }

        return res;
    }
};
