#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);

        // Step 1: Calculate left products and store in res
        int leftProduct = 1;
        for (int i = 0; i < n; ++i) {
            res[i] = leftProduct;
            leftProduct *= nums[i];
        }

        // Step 2: Calculate right products and multiply with corresponding left products
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            res[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return res;
    }
};
