class Solution {

public:
void f(vector<int>& candidates,vector<int>& temp,  vector<vector<int>>&ans,int target,int i)
{

     if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
    if(i>=candidates.size() || target<0)
    {
        return;
    }
    
   
        temp.push_back(candidates[i]);
        f(candidates,temp,ans,target-candidates[i],i);
        temp.pop_back();
    
    f(candidates,temp,ans,target,i+1);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int n=candidates.size();
    vector<int>temp;
    vector<vector<int>>ans;
    int sum=0;
    f(candidates,temp,ans,target,0);
    return ans;
    }
};