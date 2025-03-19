class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& arr, int sr, int sc, int color) {
        int n=arr.size();
        int m=arr[0].size();
        vector<vector<int>>ans=arr;
        if(arr[sr][sc]==color)
        return ans;
        ans[sr][sc]=color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int original=arr[sr][sc];
        int delrow[4] = {-1, 1, 0, 0};
        int delcol[4] = {0, 0, -1, 1};
        while(q.size()!=0)
        {
            auto node=q.front();
            q.pop();
            for(int k=0;k<4;k++)
            {
                int nr=node.first+delrow[k];
                int nc=node.second+delcol[k];
                if(nr>=0 and nr<n and nc>=0 and nc<m and ans[nr][nc]==original)
                {
                    ans[nr][nc]=color;
                    q.push({nr,nc});
                }
            }
        }
        return ans;
    }
};