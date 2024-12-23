class Solution {
public:
    void find(vector<int>& nums, vector<int>& temp, vector<vector<int>>& ans, vector<bool>& used) {
        // Base case: if the current permutation (temp) is complete
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Recursive backtracking
        for (int i = 0; i < nums.size(); i++) {
            if (!used[i]) { // Check if the current number is already used
                temp.push_back(nums[i]);
                used[i] = true; // Mark the number as used
                find(nums, temp, ans, used); // Recurse for the next number
                used[i] = false; // Backtrack
                temp.pop_back(); // Remove the last number
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp; // Current permutation
        vector<vector<int>> ans; // Result to store all permutations
        vector<bool> used(nums.size(), false); // To track used elements

        find(nums, temp, ans, used); // Start backtracking
        return ans;
    }
};
