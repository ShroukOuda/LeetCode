class Solution {
public:
    int minimumPushes(const std::string &word) {
        cin.sync_with_stdio(0); cin.tie(0); cout.tie(0);
        vector<int> vec(26);
        for (auto c : word)
            vec[c - 'a']++;
        sort(vec.rbegin(), vec.rend());
        int res = 0;
        int pushes = 1;
        int cnt = 0;
        for (auto v : vec)
        {
            res += v * pushes;
            cnt ++;
            if (cnt == 8)
            {
                pushes++;
                cnt = 0;
            }
        }
        return res;
    }
};
