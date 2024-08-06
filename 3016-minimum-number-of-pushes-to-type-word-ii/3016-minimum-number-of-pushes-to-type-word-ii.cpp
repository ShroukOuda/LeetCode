#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumPushes(const std::string &word) {
        // Step 1: Count frequency of each letter
        std::map<char, int> frequency;
        for (char c : word) {
            frequency[c]++;
        }

        // Step 2: Transfer frequencies to a vector of pairs
        std::vector<std::pair<int, char>> freqVector;
        for (const auto& pair : frequency) {
            freqVector.push_back({pair.second, pair.first});
        }

        // Step 3: Sort the vector by frequency in descending order
        std::sort(freqVector.begin(), freqVector.end(), std::greater<>());

        // Step 4: Calculate minimum pushes
        int res = 0;
        int pushes = 1;
        int cnt = 0;

        for (const auto& pair : freqVector) {
            int freq = pair.first;
            res += freq * pushes;
            cnt++;
            if (cnt == 8) { // Each key can have at most 8 letters
                pushes++;
                cnt = 0;
            }
        }

        return res;
    }
};
