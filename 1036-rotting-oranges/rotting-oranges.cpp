class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>v=grid;
        queue<pair<int,int>>q;
        int c=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if(v[i][j]==2)
                    q.push({i,j});
                if(v[i][j]==1)
                    c++;
            }
        if(c==0)
            return 0;
        if(q.empty())
            return -1;
        int min=-1;
        vector<pair<int,int>>d={{1,0},{-1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int s=q.size();
            while(s--){
                auto [x,y]=q.front();
                q.pop();
                for(auto [dx,dy]:d){
                    int i=x+dx;
                    int j=y+dy;
                    if(i>=0 && i<m && j>=0 && j<n && v[i][j]==1){
                        v[i][j]=2;
                        c--;
                        q.push({i,j});
                    }
                }
            }
            min++;
        }
        if(c==0)
            return min;
        return -1;
    }
};