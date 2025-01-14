class Solution {
public:
    // here it is the bruete force solution
    // int subarraySum(vector<int>& nums, int k) {
    //     int n=nums.size();
    //     // return 2;
    //     int sum=0;
    //     int cnt=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum=nums[i];
    //         if(sum==k)
    //         cnt++;
    //         for(int j=i+1;j<n;j++)
    //         {
    //           sum+=nums[j];
    //           if(sum==k)
    //           cnt++;
    //         }

    //     }
    //     return cnt;
    // here we can optimized the code using the prefix sum
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> mpp;
        // here we can put(0,1); which is used to check  and cnt for getting sum
        // of k;
        mpp[0] = 1;
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            // here we can find the sum of the elements consecutively for
            // maintain the subarray order
            sum += nums[i];
            // here we can find the remainder value to check if the remainder value
                // present in the map then that remainder value subarray present which is equal to the target value
                int rem = sum - k;
            if (mpp.find(rem) != mpp.end()) {
                // here we can find how many times rem be present in the map
                cnt += mpp[rem];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};