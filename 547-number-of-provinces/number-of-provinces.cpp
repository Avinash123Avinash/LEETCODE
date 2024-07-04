class Solution {
    void dfs(vector<int> adjls[], int i,  vector<bool>&vis) {
        vis[i] = true;
        for (auto it : adjls[i]) {
            if (!vis[it])
                dfs(adjls, it, vis);
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int m = isConnected[0].size();
        vector<int> adjls[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (isConnected[i][j] == 1 and i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int l=n;
     vector<bool> vis(n, false);
        int cnt = 0;
        for (int i = 0; i < m; i++) {
            if (!vis[i]) {
                dfs(adjls, i, vis);
                cnt++;
            }
        }
        return cnt;
    }
};