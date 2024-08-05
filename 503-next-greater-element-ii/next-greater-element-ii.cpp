class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
    stack<pair<int,int>>s;
    vector<int>ans(n,-1);
    for(int i=0;i<2*n;i++)
    {
        while(!s.empty() and s.top().first<nums[i%n])
        {
            ans[s.top().second]=nums[i%n];
            s.pop();
        }
        if(i<n)
        s.push({nums[i],i});
    }

    return ans;
    }
};