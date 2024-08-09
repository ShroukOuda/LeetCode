class Solution {
public:
    int isMagic(vector<vector<int>>& grid, int r, int c) {
        int sum_main = 0;
        int sum_anti = 0;
        int sum_rows;
        int sum_cols;
        int first_ele = grid[r][c];
        for (int i = 0; i < 3; i++){
            sum_rows = 0;
            sum_cols = 0;
            for (int j = 0; j < 3; j++) {
                sum_rows += grid[i + r][j + c];
                sum_cols += grid[j + r][i + c];
                if ((first_ele == grid[i + r][j + c]) && i)
                    return 0;
                if (!(grid[i + r][j + c] >= 1 && grid[i + r][j + c] <= 9))
                    return (0);
                if (i == j)
                    sum_main += grid[i + r][j + c];
                if (i + j == 2)
                    sum_anti += grid[i + r][j + c];
            }
            if (sum_rows != 15 || sum_cols != 15)
                return (0);
        }
        if (sum_main == sum_anti)
            return 1;
        return 0;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < rows - 2; i++){
            for (int j = 0; j < cols - 2; j++){
                if (isMagic(grid, i, j))
                    cnt++;
            }
        }
        return cnt;
    }
};