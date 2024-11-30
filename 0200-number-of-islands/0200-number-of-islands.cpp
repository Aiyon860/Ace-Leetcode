class Solution {
public:
    void dfs(
            int x, int y, int m, int n,
            vector<vector<char>>& grid,
            vector<vector<bool>>& visited
        ) {
        if (x < 0 || y < 0 || x >= m || y >= n) return;
        if (grid[x][y] != '1' || visited[x][y]) return;
        visited[x][y] = true;
        dfs(x + 1, y, m, n, grid, visited);
        dfs(x - 1, y, m, n, grid, visited);
        dfs(x, y + 1, m, n, grid, visited);
        dfs(x, y - 1, m, n, grid, visited);
    }

    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0, m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    ++cnt;
                    dfs(i, j, m, n, grid, visited);
                }
            }
        }
        return cnt;
    }
};