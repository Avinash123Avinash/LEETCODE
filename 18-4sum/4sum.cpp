class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int n=nums.size();
        map<vector<int>,int>mpp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum=(nums[i]*1ll+nums[j]*1ll+nums[k]*1ll+nums[l]*1ll)*1ll;
                    if(sum<target)
                    {
                      k++;
                    }
                    else if(sum>target)
                    {
                        l--;
                    }
                    else
                    {
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        k++;
                        l--;
                        ans.push_back(temp);
                    }
                }
            }
        }
     set<vector<int>>st(ans.begin(),ans.end());
     vector<vector<int>>ans1(st.begin(),st.end());

        return ans1;
    }
};