class Solution {
public:
    string smallestNumber(string arr) {
        int n=arr.size();
       stack<int>st;
       int num=1;
       string ans;
       for(int i=0;i<=n;i++)
       {
         st.push(num++);
         if(i==arr.size() || arr[i]=='I')
         {
            while(!st.empty())
            {
                ans.push_back('0'+st.top());
                st.pop();
            }
         }
       }
        return ans;
    }
};