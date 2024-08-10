class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n=nums.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            int asteroid=nums[i];
            bool colision=false;
            while(!st.empty() and asteroid<0 and st.top()>0)
            {
               if(st.top()>-asteroid)
               {
                  colision=true;
                  break;
               }
               else if(st.top()<-asteroid)
               {
                     st.pop();
                     continue;
               }
               else
               {
                st.pop();
                colision=true;
                break;
               }
            }
            if(!colision)
            st.push(asteroid);
        }
    
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};