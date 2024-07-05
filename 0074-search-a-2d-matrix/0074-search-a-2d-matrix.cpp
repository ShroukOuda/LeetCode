class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto& row:matrix) {
        int left = 0;
        int right = row.size() - 1;
        int mid;
        while (right >= left) {
            mid = (right + left) / 2;
            if (target == row[mid]) {
                return true;
            }
            else if (target > row[mid])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
        return false;
}
};