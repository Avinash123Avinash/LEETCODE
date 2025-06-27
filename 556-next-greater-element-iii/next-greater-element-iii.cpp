class Solution {
public:
    int nextGreaterElement(int n) {
        int f=n;
        vector<int>ans;
        while(n!=0)
        {
            int r=n%10;
            ans.push_back(r);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        int m=ans.size();
        if(m==1)
        return -1;
        int l=-1;
    for(int i=m-2;i>=0;i--)
    {
       if(ans[i+1]>ans[i])
       {
            l=i;
            break;
       }
    }
    if(l==-1)
    return -1;
int small=l+1;
    for(int i=l+1;i<m;i++)
    {
        // if(ans[i]>ans[l])
        // swap(ans[i],ans[l]);
        // break;
        if(ans[i]>ans[l] and ans[i]<=ans[small] )
        small=i;
    }
    swap(ans[l],ans[small]);
    sort(ans.begin()+l+1,ans.end());
        long long res=0;
        for(int i=0;i<ans.size();i++)
        {
            res=res*10+ans[i];
        }
        cout<<res<<endl;
       if(res<=f)
       return -1;
       else
        return res>INT_MAX?-1:res;
    }
};