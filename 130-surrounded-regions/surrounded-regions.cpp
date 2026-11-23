class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>vis(m, vector<int>(n,0));

        for(int i = 0; i < n; i++)
            if (board[0][i] == 'O' && !vis[0][i])
                 dfs(board, vis, 0, i); 
        for(int i = 0; i < m; i++)
            if (board[i][n - 1] == 'O' && !vis[i][n - 1]) 
                dfs(board, vis, i, n - 1);
        for(int i = 0; i < n; i++)
            if (board[m - 1][i] == 'O' && !vis[m - 1][i]) 
                dfs(board, vis, m - 1, i);
        for(int i = 0; i < m; i++)
            if (board[i][0] == 'O' && !vis[i][0])
                 dfs(board, vis, i, 0);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(vis[i][j] == 0 && board[i][j] == 'O')
                    board[i][j] = 'X';
    }
    void dfs (vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j){
        int m = board.size();
        int n = board[0].size();
        vis[i][j] = 1;
        int di[] = {-1,0,+1,0};
        int dj[] = {0,+1,0,-1};
        for(int x = 0; x < 4; x++){
            int row = i + di[x];
            int col = j + dj[x];
            if((row >= 0 && row < m) && (col >= 0 && col < n))
                if(!vis[row][col] && board[row][col] == 'O')
                    dfs(board,vis,row,col);
        }
    }
};