class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        vector<int>sum(n,1);
        if(n==1)
        return 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<arr[i])
            sum[i]=sum[i-1]+1;
        }
//  backward pasing
for(int i=n-2;i>=0;i--)
{
if(arr[i]>arr[i+1])
{
    sum[i]=max(sum[i],(sum[i+1]+1));
}
}

        int ans=0;
        for(int i=0;i<n;i++)
        {
           ans+=sum[i];
        }
        return ans;
    }
};