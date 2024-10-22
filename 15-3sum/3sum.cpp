class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
       set<vector<int>>st;
     
      for(int i=0;i<n;i++)
      {
        int j=i+1;
          int k=n-1;
        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0)
            {
             vector<int>temp={nums[i],nums[j],nums[k]};
             st.insert(temp);
             j++;
             k--;
            }
            else if(sum<0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }


      }
          vector<vector<int>>ans(st.begin(),st.end());
          return ans;
        
    }
};