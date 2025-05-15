class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0]!=0 || grid[n-1][n-1]!=0)
        return -1;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        int delrow[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
        int delcol[8] = {0, -1, 1, 0, -1, 1, -1, 1};
        queue<pair<pair<int, int>,int>> q;
        q.push({{0, 0},1});
        vis[0][0] = 1;
        int cnt = 0;
        if (grid[0][0] == 0)
            cnt = cnt + 1;
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int row = it.first.first;
            int col = it.first.second;
            int dist=it.second;
             if (row == n - 1 and col == n - 1)
                return dist;
            for (int i = 0; i < 8; i++) {
                int newr = row + delrow[i];
                int newc = col + delcol[i];
                if (newr >= 0 and newc >= 0 and newr < n and newc < n and
                    grid[newr][newc] == 0 and vis[newr][newc] != 1) {
                    // cnt = cnt + 1;
                    vis[newr][newc] = 1;
                    q.push({{newr, newc},dist+1});
                }
            }
        }
        return -1;
    }
};