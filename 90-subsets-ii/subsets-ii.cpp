class Solution {
public:
 void f(int i,vector<int>&temp,set<vector<int>>&ans,vector<int>&nums,int n)
{
    if(i==n)
    {
        ans.insert(temp);
        return; 
    }
   
    f(i+1,temp,ans,nums,n);
     temp.push_back(nums[i]);
    f(i+1,temp,ans,nums,n);
    temp.pop_back();
    return ;
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        set<vector<int>>ans;
        f(0,temp,ans,nums,n);
        vector<vector<int>>ans1(ans.begin(),ans.end());
         return ans1;
    }
};