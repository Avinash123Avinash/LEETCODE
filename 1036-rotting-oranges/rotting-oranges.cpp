class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        int cnt = 0;
        int fresh = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1)
                    fresh++;
            }
        }
        if (fresh == 0)
            return 0;
        int delrow[4] = {-1, 1, 0, 0};
        int delcol[4] = {0, 0, -1, 1};
        while (!q.empty()) {
            int size = q.size();
            
            int flag = 0;
            for (int i = 0; i < size; i++) {
                     auto node = q.front();
                    q.pop();
                for (int k = 0; k < 4; k++) {
                    int nr = node.first + delrow[k];
                    int nc = node.second + delcol[k];
                    if (nr >= 0 and nc >= 0 and nr < n and nc < m and
                        grid[nr][nc] == 1) {
                        q.push({nr, nc});
                        grid[nr][nc] = 2;
                        fresh--;
                        flag = 1;
                    }
                }
            }
            if (flag)
                cnt++;
        }
        if (fresh == 0)
            return cnt;
        return -1;
    }
};