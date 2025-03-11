class Solution {
public:
    int findCircleNum(vector<vector<int>>& arr) {
        int n = arr.size();
        vector<int> adj[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == 1 and i != j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool> vis(n, false);
       
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
             vis[i] = true;
        queue<int> q;
        q.push(i);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (auto it : adj[node]) {
                if (!vis[it]) {
                    vis[it] = true;
                    cnt++;
                    q.push(it);
                }
            }
        }
        }

        return n - cnt;
    }
};