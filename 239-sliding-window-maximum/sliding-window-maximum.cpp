class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        deque<int>dq;
        vector<int>ans;
        while(j<n)
        {
         while(!dq.empty() and nums[dq.back()]<nums[j] )
         {
            dq.pop_back();
         }
         dq.push_back(j);
         if(j-i+1<k)
         j++;

         else if(j-i+1==k)
         {
           ans.push_back(nums[dq.front()]);
         
         if(dq.front()==i)
         dq.pop_front();
         
         i++;
         j++;
         }

        }
        return ans;
    }
};