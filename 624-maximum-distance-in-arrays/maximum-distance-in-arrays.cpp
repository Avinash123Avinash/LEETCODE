class Solution {
public:
    int maxDistance(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int mini=arr[0][0];
        int maxi=arr[0].back();
        // int maxi=INT_MIN;
        // int mini=INT_MAX;
         int ans=0;
        
        for(int i = 1;i<n;i++) {
            int a=arr[i][0];
            int b=arr[i].back();
          ans=max(ans,abs(maxi-a));
          ans=max(ans,abs(mini-b));
          maxi=max(maxi,b);
          mini=min(mini,a);
        }
        
        return ans;
    }
};
