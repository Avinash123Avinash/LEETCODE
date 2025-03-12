class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0;
        int n=nums.size();
        int r=n-1;
        int pos=-1;
        int neg=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]<0)
            {
                neg=mid;
                l=mid+1;
            }
            else
            {
                   r=mid-1;
            }
        }
        l=0;
        r=n-1;
         while(l<=r)
        {
            int mid=(l+r)/2;
            if(nums[mid]>0)
            {
                pos=mid;
                r=mid-1;
            }
            else
            {
                   l=mid+1;
            }
        }
        if(pos==-1 and neg==-1)
        return 0;
        else if(pos==-1)
        return neg+1;
        // else if(neg==-1)
        // return pos+1;
        else
        return max(n-pos,neg+1);

    }
};