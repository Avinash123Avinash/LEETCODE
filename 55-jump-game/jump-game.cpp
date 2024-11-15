class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxind=0;
if(n==1)
return true;
        for(int i=0;i<n;i++)
        {
                if( (i>maxind))
           return false;
           maxind=max(maxind,i+nums[i]);
           
           
        
        }
        return true;;
        
    }
};