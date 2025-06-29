class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            int flag=0; 
            while(!st.empty() and ((st.top()>0 and arr[i]<0)))
            {
                flag=1;
                if(abs(arr[i])>abs(st.top()))
                {
                    st.pop();
                   flag=0;
                    continue;
                }
                 else if(abs(arr[i])<abs(st.top()))
                  {
                   break;
                  }
                   else
                    {
                        st.pop();
                        break;
                    }

            }
            if(!flag)
            st.push(arr[i]);
         
        }
           while(!st.empty())
            {
                int k=st.top();
                ans.push_back(k);
                st.pop();

            }
            reverse(ans.begin(),ans.end());
          return ans;
    }
};