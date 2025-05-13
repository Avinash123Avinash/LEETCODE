class Solution {
public:
bool dfs(int node,vector<int>&vis,vector<vector<int>>& graph)
{
    if(vis[node]==2) return true;
    if (vis[node]==1) return false;
     vis[node]=1;
     for(auto it:graph[node])
     {
        if(!dfs(it,vis,graph))
        return false;
     }
     vis[node]=2;
     return true;

}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
           if(dfs(i,vis,graph))
           ans.push_back(i);
        }
        return ans;
    }
};