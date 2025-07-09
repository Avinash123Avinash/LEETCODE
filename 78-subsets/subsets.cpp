class Solution {
public:
void f(int ind,vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans)
{
    if(ind==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[ind]);
    f(ind+1,nums,temp,ans);
    temp.pop_back();

    f(ind+1,nums,temp,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        f(0,nums,temp,ans);
        return ans;
    }
};