class Solution {
public:
void f(vector<int>&nums,vector<int>&temp, vector<vector<int>>&ans,int i)
{
    if(i==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    // here we exclude the input
    f(nums,temp,ans,i+1);
    // here we include the input
    temp.push_back(nums[i]);
    f(nums,temp,ans,i+1);
    // here we backtrack
    temp.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        vector<vector<int>>ans;
        // ans.push_back(temp);
        // for(int i=0;i<n;i++)
        // {
        //     temp.push_back(nums[i]);
        //     ans.push_back(temp);
        //     for(int j=i+1;j<n;j++)
        //     {
        //         temp.push_back(nums[j]);
        //         ans.push_back(temp);
        //         temp.pop_back();
        //     }

        //     temp.clear();
        // }
        // return ans;
        f(nums,temp,ans,0);
        return ans;
        
    }
};