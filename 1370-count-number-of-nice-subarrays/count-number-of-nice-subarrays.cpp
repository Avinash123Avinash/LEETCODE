class Solution {
public:
// // here we also use the concept of the variable sliding window
//     int number(vector<int>& nums, int k) {
//         int n=nums.size();
//         int i=0;
//         int j=0;
//         int cnt=0;
//         int ans=0;
//         // take two points and one less than n
//         while(j<n)
//         {
//             // here the calculation part
//           if(nums[j]%2!=0)
//           k--;
//         //   here the condition part which is used to eliminate the element
//          while(i<=j and k<0)
//          {
//             if(nums[i]%2!=0)
//             k++;
//             i++;
//          }
//         //  here we cnt all the subarray which satisfies the condition
//          cnt+=j-i+1;
//          j++;
//     }
//     return cnt;
//     }
//      int numberOfSubarrays(vector<int>& nums, int k){
//         // here we subtarct the subarray with at most k odd number to the at most k-1 odd number
//         return number(nums,k)-number(nums,k-1);
//      }
int numberOfSubarrays(vector<int>& nums, int k){
    int n=nums.size();
    int sum=0;
    int cnt=0;
    map<int,int>mpp;
    mpp[0]=1;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i]%2;
        int l=sum-k;
        if(mpp.find(l)!=mpp.end())
        {
            cnt+=mpp[l];
        }
        mpp[sum]++;
    }
    return cnt;
}

};