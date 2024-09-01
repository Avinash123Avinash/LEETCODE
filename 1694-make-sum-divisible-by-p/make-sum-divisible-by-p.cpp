class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        long long total_sum = 0;
        
        // Calculate the total sum of the array
        for (int num : nums) {
            total_sum += num;
        }
        
        // If total sum is already divisible by p, no need to remove any subarray
        int target = total_sum % p;
        if (target == 0) {
            return 0;
        }

        // HashMap to store the prefix sum modulo p and its index
        unordered_map<int, int> prefix_mod_map;
        prefix_mod_map[0] = -1;  // To handle the case when a prefix itself is the answer

        int current_prefix_sum = 0;
        int min_len = n;

        for (int i = 0; i < n; ++i) {
            current_prefix_sum = (current_prefix_sum + nums[i]) % p;
            int needed_mod = (current_prefix_sum - target + p) % p;
            
            if (prefix_mod_map.find(needed_mod) != prefix_mod_map.end()) {
                min_len = min(min_len, i - prefix_mod_map[needed_mod]);
            }
            
            // Store the current prefix sum modulo p and its index
            prefix_mod_map[current_prefix_sum] = i;
        }

        return (min_len == n) ? -1 : min_len;
    }
};
