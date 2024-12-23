class Solution {
public:
void find(vector<int>& nums,vector<int>&temp, vector<vector<int>>&ans, vector<bool>&used)
{
    if(temp.size()==nums.size())
{
    ans.push_back(temp);
    return;
}
for(int i=0;i<nums.size();i++)
{
    if(!used[i])
    {
        temp.push_back(nums[i]);
        used[i]=true;
        find(nums,temp,ans,used);
        used[i]=false;
        temp.pop_back();
        
    }
}
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<bool>used(n,false);
        vector<vector<int>>ans;
        find(nums,temp,ans,used);
        sort(ans.begin(),ans.end());
        vector<int>prev(n,0);
        vector<vector<int>>ans1;
        for(auto it:ans)
        {
            if(it!=prev)
            {
            ans1.push_back(it);
            prev=it;
            }
        }
        
      
        return ans1;
    }
};