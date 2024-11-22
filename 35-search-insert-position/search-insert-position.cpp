class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int f=0;
        int l=n-1;
        int m=-1;
        while(f<=l)
        {
            int mid=(f+l)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[mid]<target)
            {
                m=max(m,mid);
                f=mid+1;
            }
            else
            {
                l=mid-1;
            }
        }
        return m+1;
    }
};