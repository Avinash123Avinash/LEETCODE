class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        vector<int> indegree(num, 0);
        vector<vector<int>> adj(num);
        for (int i = 0; i < pre.size(); i++) {
            adj[pre[i][1]].push_back(pre[i][0]);
            indegree[pre[i][0]]++;
        }
        
        queue<int> q;
        for (int i = 0; i < indegree.size(); i++) {
            if (indegree[i] == 0)
                q.push(i);
        }
        int cnt=0;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cnt++;
            for (auto it : adj[node]) {

                indegree[it]--;
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        return cnt==num?true:false;
    }
};