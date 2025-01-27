class Solution {
public:
#define INT_MAX 1000
    vector<bool> checkIfPrerequisite(int num, vector<vector<int>>& pre, vector<vector<int>>& qu) {
        vector<vector<int>>dist(num,vector<int>(num,INT_MAX));
        for(int i=0;i<num;i++)
        {
            dist[i][i]=0;
        }
        unordered_map<int,vector<int>>adj;
        for(auto it:pre)
        {
            adj[it[0]].push_back(it[1]);
            dist[it[0]][it[1]]=1;
        }
        for(int k=0;k<num;k++)
        {
            for(int i=0;i<num;i++)
            {
                for(int j=0;j<num;j++)
                {
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        vector<bool>ans;
        for(auto it:qu)
        {
            if(dist[it[0]][it[1]]<INT_MAX)
            ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
};