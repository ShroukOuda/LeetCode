class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> new_array;
        for (int i = 0; i < n; i++) {
            long long pre_sum = 0;
            for (int j = i; j < n; j++) {
                pre_sum += nums[j];
                new_array.push_back(pre_sum);
            }
        }
        sort(new_array.begin(), new_array.end());
        long long total_sum = 0;
        for (int i = left - 1; i < right; i++) {
            total_sum = (total_sum + new_array[i]) %  1000000007;
        }

        return total_sum;
    }
};
