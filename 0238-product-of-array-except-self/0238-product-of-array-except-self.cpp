class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int product = 1;
        int productZero = 1;
        int zeroCount = 0;
        for (auto& num:nums) {
            if (!num)
                zeroCount++;
            if (num)
                productZero *= num;
            product *= num;
        }
        for (auto& num:nums) {
            if (zeroCount > 1)
                res.push_back(0);
            else if (zeroCount == 1){
                if (!num)
                    res.push_back(productZero);
                else
                    res.push_back(0);
            }
            else {
                res.push_back(product / num);
            }
        }
        return res;
    }
};