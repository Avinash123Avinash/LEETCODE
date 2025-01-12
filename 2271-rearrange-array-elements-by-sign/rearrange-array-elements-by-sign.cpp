class Solution {
public:
    // vector<int> rearrangeArray(vector<int>& nums) {
    //     vector<int>pos;
    //     vector<int>neg;
    //     vector<int>ans;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         if(nums[i]>0)
    //         pos.push_back(nums[i]);
    //         else
    //         {
    //             neg.push_back(nums[i]);
    //         }
    //     }
    //     for(int i=0;i<pos.size();i++)
    //     {
    //       ans.push_back(pos[i]);
    //       ans.push_back(neg[i]);
    //     }
    //     return ans;
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int p=0;
        int ne=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[p]=nums[i];
                p=p+2;
            }
            else
            {
                ans[ne]=nums[i];
                ne=ne+2;
            }
        }
        return ans;
    }
};