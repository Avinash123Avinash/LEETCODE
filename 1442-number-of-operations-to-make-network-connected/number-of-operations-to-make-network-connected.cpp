class disjointset
{
    vector<int>parent,size;
    public:
    disjointset(int n)
    {
        size.resize(n+1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
            size[i]=1;
        }
    }
int find(int X)
{
      if(X==parent[X])
      return X;
      return parent[X]=find(parent[X]);
       
}
void unionSet(int X,int Z)
{
       
      int upX=find(X);
      int upZ=find(Z);
      if(upX==upZ)return;
      if(size[X]>size[Z])
      {
          parent[upZ]=upX;
          size[upX]+=size[upZ];
      }
     
      else
      {
          parent[upX]=upZ;
          size[upZ]+=size[upX];
      }
}

};
class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& adj) {
          // code here
       disjointset ds(n);
       int m=adj.size();
       int extra=0;
       for(int i=0;i<m;i++)
       {
        if(ds.find(adj[i][0])==ds.find(adj[i][1]))
        extra++;
        else
        {
            ds.unionSet(adj[i][0],adj[i][1]);
        }
       }

       int com=0;
       for(int i=0;i<n;i++)
       {
        if(ds.find(i)==i)
        com++;
       }
       if(extra<(com-1))
       return -1;
       else
       return com-1;
    
    
    }
};
