class Solution {
public:
void f(vector<int>&temp,vector<vector<int>>&ans,int k,int target,int i)
{
    if(temp.size()>=k )
    {
        if(target==0)
        {
            ans.push_back(temp);
        }
        return;
    }
    if(target<0)
    {
        return;
    }
    if(i>target || i>9)
    return;
    temp.push_back(i);
    f(temp,ans,k,target-i,i+1);
    temp.pop_back();
     f(temp,ans,k,target,i+1);
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        f(temp,ans,k,n,1);
        return ans;
    }
};