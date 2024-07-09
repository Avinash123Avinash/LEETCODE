class Solution {
    void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int initial,int ncol[],
    int nrow[],int row,int col,int color)
    {
        int n=image.size();
        int m=image[0].size();
        ans[row][col]=color;
        for(int i=0;i<4;i++)
        {
            int delrow=row+nrow[i];
          int delcol=col+ncol[i];
            if(delrow>=0 and delrow<n and delcol>=0 and delcol<m and ans[delrow][delcol]==initial and ans[delrow][delcol]!=color)
            {
                dfs(image,ans,initial,ncol,nrow,delrow,delcol,color);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial = image[sr][sc];
        vector<vector<int>> ans=image;
        int nrow[]={-1,0,+1,0};
        int ncol[]={0,+1,0,-1};
        dfs(image,ans,initial,ncol,nrow,sr,sc,color);
        return ans;
    }
};