class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(nums.begin(),nums.end());
        // ans.resize(n);
    //     int cnt=0;
    //     int i=n-k;
        
    //    while(i>0 and i<n)
    //     {
    //        ans[cnt]=nums[i];
    //        cnt++;
    //        i++;
            
    //     }
    //     int j=0;
    //     while(n-k>0 and j<n-k)
    //     {
    //         ans[cnt]=nums[j];
    //        cnt++;
    //        j++;
    //     }
    //     nums=ans;
    int k1=k%n;
    for(int i=0;i<n;i++)
    {
       ans[i]=nums[abs(n-k1+i)%n];
    }
    nums=ans;
      

    }
};