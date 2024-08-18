class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int cnt = 0, prev = -1e9;
        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0) {
                cnt++;
                prev = nums[i];
            } else {
                if(prev == nums[i]) cnt++;
                else cnt--;
            }
        }
        return prev;
    }
};