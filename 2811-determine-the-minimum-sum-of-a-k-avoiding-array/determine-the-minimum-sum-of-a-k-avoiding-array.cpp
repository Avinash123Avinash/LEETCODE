class Solution {
public:
    int minimumSum(int n, int k) {
        vector<int>vis(k+1,0);
        int sum=0;
        int cnt=0;
        int i=1;
        while(cnt<n)
        {
            if(k-i>=0 and vis[i]!=1)
            {
                sum+=i;
                vis[k-i]=1;
                cnt++;
            }
             if(i>k)
            {
                sum+=i;
                cnt++;
            }
            i++;
        }
        return sum;
    }
};