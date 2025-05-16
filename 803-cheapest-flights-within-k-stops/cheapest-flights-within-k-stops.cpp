class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                          int k) {
        vector<vector<pair<int, int>>> adj(n);
        int m = flights.size();
        for (int i = 0; i < m; i++) {
            adj[flights[i][0]].push_back({flights[i][1], flights[i][2]});
        }
        queue<pair<pair<int, int>, int>> q;
        q.push({{src, 0}, 0});
        vector<long long> dist(n, 1e9);
        while (!q.empty()) {
            auto it = q.front();
            q.pop();
            int node = it.first.first;
            long long dis = it.first.second;
            int cnt = it.second;
            if (cnt-1>k)continue;
            if(dist[node]<dis)continue;

                dist[node] = dis;
            for (auto it : adj[node]) {
                int v = it.first;
                int wt = it.second;
                q.push({{v, dis + wt}, cnt + 1});
            }
        }
        return dist[dst] == 1e9 ? -1 : (int)dist[dst];
    }
};