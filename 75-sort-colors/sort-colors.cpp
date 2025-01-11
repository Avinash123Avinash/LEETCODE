class Solution {
public:
// here is teh bruete force approach
    // void sortColors(vector<int>& nums) {
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         int j=n-1;
    //         while(i<j)
    //         {
    //             if(nums[i]>nums[j])
    //             swap(nums[i],nums[j]);
    //             j--;
    //         }
    //     }
    // optimization to sort the array which contain only three type of distinct element
    void sortColors(vector<int>& nums) {
         int n=nums.size();
         int l=0,m=0,h=n-1;
         while(m<=h)
         {
            // here if we get the value 0 then swap with the nums[l] 
            // for put 0 to the left side of the l pointer
            if(nums[m]==0)
            {
                swap(nums[m],nums[l]);
                l++,m++;
            }
             else if(nums[m]==2)
            {
                swap(nums[m],nums[h]);
                h--;
            }
            else
            {
                m++;
            }

         }

    }
};