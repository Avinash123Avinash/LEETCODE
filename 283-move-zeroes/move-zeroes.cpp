class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
     queue<int>q;
     for(int i=0;i<n;i++)
     {
        if(nums[i]!=0)
        {
            q.push(nums[i]);
        }
        else
        {
            cnt++;
            continue;
        }
     }
     nums.clear();
     while(!q.empty())
     {
        nums.push_back(q.front());
        q.pop();
     }
        for(int i=n-cnt;i<n;i++)
        {
            nums.push_back(0);
        }
    }
};