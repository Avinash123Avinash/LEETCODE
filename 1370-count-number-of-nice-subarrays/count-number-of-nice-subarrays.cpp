class Solution {
public:
    int number(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int cnt=0;
        int ans=0;
        while(j<n)
        {
          if(nums[j]%2!=0)
          k--;
         while(i<=j and k<0)
         {
            if(nums[i]%2!=0)
            k++;
            i++;
         }
         cnt+=j-i+1;
         j++;
    }
    return cnt;
    }
     int numberOfSubarrays(vector<int>& nums, int k){
        return number(nums,k)-number(nums,k-1);
     }
};