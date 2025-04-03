class Solution {
public:
// typedef long long ll;
    long long maximumTripletValue(vector<int>& nums) {
         int n=nums.size();
         if(n<3)
         return 0;
       int maxpre=nums[0];
       long long maxval=INT_MIN;
       int maxdiff=INT_MIN;
      
       for(int i=1;i<n-1;i++)
       {
        maxdiff=max(maxdiff,maxpre-nums[i]);
        maxval=max(maxval,(long long)(maxdiff)*nums[i+1]);
        maxpre=max(maxpre,nums[i]);
       }
      
         
       return maxval<0?0:maxval;
    }
};