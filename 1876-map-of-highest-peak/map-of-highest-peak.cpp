class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                }
            }
        }
        int delrow[4] = {-1, 1, 0, 0};
        int delcol[4] = {0, 0, -1, 1};
       while(!q.empty())
       {
        auto[r,c]=q.front().first;
        int h=q.front().second;
        ans[r][c]=h;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nr=r+delrow[i];
            int nc=c+delcol[i];
            if(nr>=0 and nc>=0 and nr<n and nc<m and vis[nr][nc]!=1)
            {
                vis[nr][nc]=1;
                q.push({{nr,nc},1+h});
            }
        }
       }
        return ans;
    }
};