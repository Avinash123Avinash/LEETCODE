class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
             int n=nums.size();
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++)
        {
           ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        vector<int>index;
        for(int i=n-k;i<n;i++)
        {
           index.push_back(ans[i].second);
        }
        vector<int>ans1;
        sort(index.begin(),index.end());
        for(int i=0;i<index.size();i++)
        {
            ans1.push_back(nums[index[i]]);
        }
        return ans1;
    }
};