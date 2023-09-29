class Solution {
    int m, n, cnt= 0;
    void dfs(vector<vector<int>> &grid, int i, int j) {
        if (i < 0 or i >= n or j < 0 or j >= m or !grid[i][j])
            return;
        grid[i][j]= 0;
        dfs(grid, i, j-1);
        dfs(grid, i, j+1);
        dfs(grid, i-1, j);
        dfs(grid, i+1, j);
        return;
    }
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        n= grid.size(), m= grid[0].size();
        for (int i= 0; i < n; i++) {
            if (grid[i][0])     dfs(grid, i, 0);
            if (grid[i][m-1])   dfs(grid, i, m-1);
        }
        for (int j= 0; j < m; j++) {
            if (grid[0][j])     dfs(grid, 0, j);
            if (grid[n-1][j])   dfs(grid, n-1, j);
        }
        for (int i= 0; i < grid.size(); i++)
            for (int j= 0; j < grid[i].size(); j++)
                if (grid[i][j])
                    cnt++;
        return cnt;
    }
};
