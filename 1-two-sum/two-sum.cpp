class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> subtractions;

        for (int i=0; i < nums.size(); ++i) {
            if (subtractions.contains(target - nums[i])) {
                return {subtractions[target - nums[i]], i};
            }

            subtractions[nums[i]] = i;
        }

        return {};
    }
};