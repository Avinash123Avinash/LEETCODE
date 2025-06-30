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
     for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
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
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return ans;

}
    long long findmin(vector<int>& arr) {
        long long sum=0;
        int n=arr.size();
        vector<int>nse;
        vector<int>pse;
        nse=findnse(arr);
        pse=findpse(arr);
       for(int i=0;i<n;i++)
       {
        int r=nse[i]-i;
        int l=i-pse[i];
    sum=sum+(l*1ll*r*1ll*arr[i]);
       }
       return sum;
    }

vector<int> findnge(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n,n);
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() and arr[st.top()]<arr[i])
        {
            ans[st.top()]=i;
            st.pop();
        }
    st.push(i);
    }
     for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }

    return ans;

}

vector<int>findpge(vector<int>&arr)
{
    int n=arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
      for(int i=n-1;i>=0;i--)
    {
       
        while(!st.empty() and arr[st.top()]<=arr[i])
        {
            ans[st.top()]=i;
            st.pop();
        }
    st.push(i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return ans;

}
    long long findmax(vector<int>& arr) {
        long long sum=0;
        int n=arr.size();
        vector<int>nge;
        vector<int>pge;
        nge=findnge(arr);
        pge=findpge(arr);
       for(int i=0;i<n;i++)
       {
        int r=nge[i]-i;
        int l=i-pge[i];
    sum=sum+(l*1ll*r*1ll*arr[i]);
       }
       return sum;
    }


    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
       return (findmax(nums)*1ll-findmin(nums)*1ll);
    }
};