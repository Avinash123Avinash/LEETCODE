class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> ans=image;
        if(image[sr][sc]==color)
        return image;
        queue<pair<int,int>>q;
        q.push({sr, sc});
        ans[sr][sc]=color;
        int original=image[sr][sc];
        int delrow[4] = {-1, 1, 0, 0};
        int delcol[4] = {0, 0, -1, 1};
        while (!q.empty()) {
            auto node = q.front();
            q.pop();
            int nf = node.first;
            int ns = node.second;
            for(int k = 0; k < 4; k++) {
                int nr = nf + delrow[k];
                int nc = ns + delcol[k];
                if (nr >= 0 and nc >= 0 and nr < n and nc < m and
                    ans[nr][nc]== original) {
                        q.push({nr,nc});
                        ans[nr][nc]=color;
                }
            }
        }
        return ans;
    }
};