class Solution {
public:
// here is the bruete force solution  28:42
//     vector<int> maxScoreIndices(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans;
//         int cnt=0,cnt1=0;
//         map<int,int>mpp;
//         for(int i=0;i<n;i++)
//         {
//             mpp[nums[i]]++;
//         }
//         ans.push_back(mpp[1]);
//    for(int i=1;i<=n;i++)
//    {
//     cnt=0,cnt1=0;
//     for(int j=0;j<=i-1;j++)
//     {
//         if(nums[j]==0)
//         cnt++;
//         else
//         {
//             cnt1++;
//             mpp[1]--;
//         }
//     }
//     cnt=cnt+mpp[1];
//     ans.push_back(cnt);
//     mpp[1]=mpp[1]+cnt1;
//    }
//    int maxi=-1;
//    for(int i=0;i<ans.size();i++)
//    {
//     maxi=max(maxi,ans[i]);
//    }
//    vector<int>ans1;
//    for(int i=0;i<ans.size();i++)
//    {
//     if(ans[i]==maxi)
//     ans1.push_back(i);
//    }
//    return ans1;
  vector<int> maxScoreIndices(vector<int>& nums) {
     int n=nums.size();
        vector<int>ans0;
        vector<int>ans1;
        vector<int>ans;
        map<int,int>mpp;
          for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        ans0.push_back(0);
        ans1.push_back(mpp[1]);
        if(nums[0]==0)
        {
            ans0.push_back(1);
            ans1.push_back(mpp[1]);
        }
        else
        {
              ans0.push_back(0);
              ans1.push_back(mpp[1]-1);
              mpp[1]--;
        }
        for(int i=2;i<=n;i++)
        {
            if(nums[i-1]==0)
            {
                ans0.push_back(ans0[i-1]+1);
                ans1.push_back(ans1[i-1]);
            }
            else
            {
               ans0.push_back(ans0[i-1]);
               ans1.push_back(ans1[i-1]-1);
            }
        }
        for(int i=0;i<ans1.size();i++)
        {
           ans.push_back(ans0[i]+ans1[i]);
        }
        int maxi=-1;
   for(int i=0;i<ans.size();i++)
   {
    maxi=max(maxi,ans[i]);
   }
   vector<int>ans2;
   for(int i=0;i<ans.size();i++)
   {
    if(ans[i]==maxi)
    ans2.push_back(i);
   }
   return ans2;

        
    }
};