class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        map<string,int>mpp;
        string ans="";
           int cnt=0;
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        for(int i=0;i<n;i++)
        {
           if(mpp[arr[i]]==1)
           {
            cnt=cnt+1;
            if(cnt==k)
            ans=arr[i];
           }
        }
    return ans;
    }
};