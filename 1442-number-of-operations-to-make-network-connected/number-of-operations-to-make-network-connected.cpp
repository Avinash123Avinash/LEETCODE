class Solution {
public:
class Disjoint
{
public:
    vector<int> rank;
    vector<int> parent;
    Disjoint(int n) {
        rank.resize(n + 1, 0);
         parent.resize(n + 1, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int findparent(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findparent(parent[node]);
    }
    void unionByrank(int u, int v) {
        int ulp_u = findparent(u);
        int ulp_v = findparent(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
            parent[ulp_u] = ulp_v;
        else if (rank[ulp_u] > rank[ulp_v])
            parent[ulp_v] = ulp_u;
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
    int makeConnected(int n, vector<vector<int>>& arr) {
        Disjoint ds(n);
         int edge=0; 
        for(auto it:arr)
        {
           int u=it[0];
           int v=it[1];
           if(ds.findparent(u)==ds.findparent(v))
           edge++;
           else
           {
             ds.unionByrank(u,v);
           }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ds.findparent(i)==i)
            cnt++;
        }
        return edge>=cnt-1?cnt-1:-1;
    }
};