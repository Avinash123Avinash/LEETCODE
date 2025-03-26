class Solution {
public:
    int maxContainers(int n, int w, int maxw) {
        int ans=0;
        for(int i=1;i<=n*n;i++)
        {
             if(w*i<=maxw)
             ans=i;
        }
        return ans;
    }
};