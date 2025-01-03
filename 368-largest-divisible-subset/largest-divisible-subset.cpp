class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& arr) {
        int n=arr.size();
         int maxi=1;
        int last=0;
        sort(arr.begin(),arr.end());
     vector<int>dp(n,1);
     vector<int>hash(n);
     for(int ind=0;ind<n;ind++)
     {
         hash[ind]=ind;
        for(int prev=0;prev<ind;prev++)
        {
            if(arr[ind]%arr[prev]==0 and (dp[prev]+1)>dp[ind] )
            {
           dp[ind]=1+dp[prev];
           hash[ind]=prev;
            }
           
        }
        
        if(dp[ind]>maxi)
        {
        maxi=dp[ind];
        last=ind;
        }
     }
     vector<int>ans;
     ans.push_back(arr[last]);
    //   last=hash[last];
     while(hash[last]!=last)
     {
         last=hash[last];
         ans.push_back(arr[last]);
         
     }
     reverse(ans.begin(),ans.end());
     
     return ans;
    }
};