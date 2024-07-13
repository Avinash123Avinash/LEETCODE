class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      queue<pair<int,int>>q;
      vector<vector<int>> vis(n, vector<int>(m, 0));
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<m;j++)
        {
            if(i==0 || j==0 ||i==n-1|| j==m-1)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }

      }
         int delrow[4]={-1,0,+1,0};
        int delcol[4]={0,+1,0,-1};
        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=r+delrow[i];
                int ncol=c+delcol[i];
                if( nrow>=0 and nrow<n and ncol>=0 and ncol<m and grid[nrow][ncol]==1 and vis[nrow][ncol]==0)
                {
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=1;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 and vis[i][j]==0)
                cnt++;
            }
        }
        return cnt;
      }  
    
};