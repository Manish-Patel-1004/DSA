class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (vis[i][j] == 1 || grid[i][j] == '0')
                    continue;
                bfs(vis, i, j, grid);
                count++;
            }
        }
        return count;
    }

    void bfs(vector<vector<int>>& vis, int i, int j,
             vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;
        q.push({i, j});
        vis[i][j] = 1;

        int dis_i[] = {-1, 0, +1, 0};
        int dis_j[] = {0, +1, 0, -1};

        while (!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for (int x = 0; x < 4; x++) {
                int row = i + dis_i[x];
                int col = j + dis_j[x];
                if ((row >= 0 && row < m) && (col >= 0 && col < n)) {
                    if (grid[row][col] == '1' && vis[row][col] == 0) {
                        q.push({row, col});
                        vis[row][col] = 1;
                    }
                }
            }
        }
    }
};