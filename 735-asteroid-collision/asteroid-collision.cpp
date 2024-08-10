class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> st;
        
        for (int i = 0; i < nums.size(); ++i) {
            int asteroid = nums[i];
            bool collision = false;
            
            while (!st.empty() && asteroid < 0 && st.top() > 0) {
                // Check if top of stack and current asteroid will collide
                if (st.top() < -asteroid) {
                    st.pop();  // Top of stack explodes
                    continue;  // Continue to check for more collisions
                } else if (st.top() == -asteroid) {
                    st.pop();  // Both explode
                    collision = true;
                    break;
                } else {
                    collision = true;
                    break;  // Current asteroid explodes
                }
            }
            
            if (!collision) {
                st.push(asteroid);  // No collision, asteroid survives
            }
        }
        
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());  // Reverse to get the correct order
        return ans;
    }
};
