class Solution {
public:
void f(vector<int>& nums,vector<int>& temp,vector<vector<int>>&ans,map<vector<int>,int>&mpp,int i)
{
    if(i==nums.size())
     {
        if(mpp.find(temp)==mpp.end())
        {
            ans.push_back(temp);
            mpp[temp]++;

        }
        return;
     }
   f(nums,temp,ans,mpp,i+1);
   temp.push_back(nums[i]);
   f(nums,temp,ans,mpp,i+1);
   temp.pop_back();
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        map<vector<int>,int>mpp;
        f(nums,temp,ans,mpp,0);
        return ans;
    }
};