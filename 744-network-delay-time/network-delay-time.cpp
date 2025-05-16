class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
      vector<vector<pair<int, int>>> adj(n);

        for(int i=0;i<times.size();i++)
        {
          adj[times[i][0]-1].push_back({times[i][1]-1,times[i][2]});
        }
        queue<int>q;
        q.push(k-1);
        vector<int>dis(n,1e9);
        dis[k-1]=0;
        int cnt=1;
        int maxi =INT_MIN;
        while(!q.empty())
        {
            int node =q.front();
            q.pop();
            for(auto it:adj[node])
            {
                int v=it.first;
                int wt=it.second;
                if(dis[node]+wt<dis[v])
                {
                     
                    dis[v]=dis[node]+wt;
                    q.push(v);
                }
            }
        }
      for(int i=0;i<dis.size();i++)
      {
          maxi=max(maxi,dis[i]);
        if(dis[i]==1e9)
        return -1;
      }
      return maxi;

    }
};