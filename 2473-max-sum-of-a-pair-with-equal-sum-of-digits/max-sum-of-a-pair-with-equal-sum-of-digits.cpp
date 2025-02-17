class Solution {
public:
//     int maximumSum(vector<int>& nums) {
//         // time complexity=O(nlogn)
//       sort(nums.begin(),nums.end());
//       int maxi=-1;
//       int n=nums.size();
//       map<int,int>mpp;
//     //   time for this loop O(n)
//       for(int i=0;i<n;i++)
//       {
//         int sum=0;
//         int n=nums[i];
//         // time O(9)
//         while(n!=0)
//         {
//             int r=n%10;
//             sum+=r;
//             n=n/10;
//         }
//         // O(logn)
//         if(mpp.find(sum)!=mpp.end())
//         {
//             maxi=max(maxi,(nums[i]+mpp[sum]));
//         }
//         mpp[sum]=nums[i];
//       }
//       return maxi;
//     }
// };
// time complexity O(nlogn)

// int maximumSum(vector<int>& nums) {
//     vector<priority_queue<int,vector<int>,greater<int>>>q(82);
//     int maxi=-1;
//     for(int i=0;i<nums.size();i++)
//     {
//          int sum=0;
//         int n=nums[i];
//         // time O(9)
//         while(n!=0)
//         {
//             int r=n%10;
//             sum+=r;
//             n=n/10;
//         }
//         q[sum].push(nums[i]);
//         if(q[sum].size()>2)
//         q[sum].pop();
//     }
//     for(auto it:q)
//     {
//         if(it.size()==2)
//         {
//             int first=it.top();
//             it.pop();
//             int sec=it.top();
//             it.pop();
//             maxi=max(maxi,first+sec);
//         }
//     }
//     return maxi;


//     }
// };

    int maximumSum(vector<int>& nums) {
        // time complexity=O(nlogn)
      sort(nums.begin(),nums.end());
      int maxi=-1;
      int n=nums.size();
      vector<int>mpp(82,0);
    //   time for this loop O(n)
      for(int i=0;i<n;i++)
      {
        int sum=0;
        int n=nums[i];
        // time O(9)
        while(n!=0)
        {
            int r=n%10;
            sum+=r;
            n=n/10;
        }
        // O(logn)
        if(mpp[sum]!=0)
        {
            maxi=max(maxi,(nums[i]+mpp[sum]));
        }
        mpp[sum]=max(mpp[sum],nums[i]);
      }
      return maxi;
    }
};


