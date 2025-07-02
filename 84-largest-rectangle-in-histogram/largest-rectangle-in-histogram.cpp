class Solution {
public:
vector<int> findnse(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n,n);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() and arr[st.top()]>arr[i])
        {
            ans[st.top()]=i;
            st.pop();
        }
    st.push(i);
    }

    return ans;

}
vector<int>findpse(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
      for(int i=n-1;i>=0;i--)
    {
       
        while(!st.empty() and arr[st.top()]>=arr[i])
        {
            ans[st.top()]=i;
            st.pop();
        }
    st.push(i);
    }
    return ans;

}
   
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        if(n==1)
        return heights[0];
        vector<int>nse=findnse(heights);
    vector<int>pse=findpse(heights);
     
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
         int w=nse[i]-pse[i]-1;
         int h=heights[i];
         maxi=max(maxi,w*h);
        }
        return maxi;
    }
};