class Solution {
public:
vector<int> findPSE(vector<int>& arr,int n)
{
    vector<int>ans(n);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() and arr[st.top()]>arr[i])
        {
            st.pop();
        }
        ans[i]=st.empty()?-1:st.top();
        st.push(i);
    }
    return ans;
}
vector<int> findNSE(vector<int>& arr,int n)
{
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() and arr[st.top()]>=arr[i])
        {
            st.pop();
        }
        ans[i]=st.empty()? n :st.top();
        st.push(i);
    }
    return ans;
}
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
         long long  sum=0;
        int MOD=1e9+7;
        vector<int>nse=findNSE(arr,n);
        vector<int>pse=findPSE(arr,n);
        for(int i=0;i<n;i++)
        {
           long long  left=i-pse[i];
             long long right=nse[i]-i;
             sum=(sum+(left*right*arr[i])%MOD)%MOD;
        }
        return sum;
        
    }
};