class Solution {
    bool dfs(vector<vector<int>>& graph,vector<int>& color,int start,int col)
    {
     color[start]=col;
     for(auto it:graph[start]){
        if(color[it]==-1)
        {
            if(dfs(graph,color,it,!col)==false)
                return false;
        }
        else if(color[it]==col)
            return false;
     }
     return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
       int v=graph.size();
       vector<int>color(v,-1);
       int col=0;
       for(int i=0;i<v;i++)
       {
        if(color[i] == -1 )
        {
           if(dfs(graph,color,i,col)==false)
            return false;
        }
       }
       return true;    
    }
};