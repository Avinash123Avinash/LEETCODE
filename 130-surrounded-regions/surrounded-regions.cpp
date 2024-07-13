class Solution {
public:
    vector<vector<char>> solve(vector<vector<char>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        vector<vector<char>> image = mat; // Initialize image directly from mat

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                    if (mat[i][j] == 'O') {
                        q.push({i, j});
                        vis[i][j] = 1;
                    }
                }
            }
        }

        int delrow[4] = {-1, 0, +1, 0};
        int delcol[4] = {0, +1, 0, -1};

        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nrow = r + delrow[i];
                int ncol = c + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                    mat[nrow][ncol] == 'O' && vis[nrow][ncol] == 0) {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 'O' && vis[i][j] == 0) {
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};
// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//         int n = mat.size();
//         int m = mat[0].size();
//         vector<vector<int>> vis(n, vector<int>(m, 0));
//         vector<vector<int>> dis(n, vector<int>(m, 0));
//         queue<pair<pair<int, int>, int>> q;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 if (mat[i][j] == 0) {
//                     q.push({{i, j}, 0});
//                     vis[i][j] = 1;
//                 } else {
//                     vis[i][j] = 0;
//                 }
//             }
//         }
//         int delrow[4] = {-1, 0, +1, 0};
//         int delcol[4] = {0, +1, 0, -1};
//         while (!q.empty()) {
//             int r = q.front().first.first;
//             int c = q.front().first.second;
//             int d = q.front().second;
//             q.pop();
//             for (int i = 0; i < 4; i++) {
//                 int nrow = r + delrow[i];
//                 int ncol = c + delcol[i];
//                 if (nrow >= 0 and nrow < n and ncol >= 0 and ncol < m and
//                     vis[nrow][ncol] == 0) {
//                     vis[nrow][ncol] = 1;
//                     dis[nrow][ncol] = d + 1;
//                     q.push({{nrow, ncol}, d + 1});
//                 }
//             }
//         }
//         return dis;
//     }
// };