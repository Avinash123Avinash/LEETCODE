class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int cnt=0;
            int n=i;
            while(n!=0)
            {
                if(n%2==1)
                cnt++;
                n=n/2;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};