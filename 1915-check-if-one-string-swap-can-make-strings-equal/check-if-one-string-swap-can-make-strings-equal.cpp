class Solution {
public:
    // bool areAlmostEqual(string s1, string s2) {
        // int n=s1.size();
        // int m=s2.size();
        // if(n!=m)
        // return false;
        // string ans(s2.begin(),s2.end());
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i;j<n;j++)
        //     {
        //         swap(ans[i],ans[j]);
        //         if(ans==s1)
        //         return true;
        //         ans=s2;
        //     }
        // }
        // return false;
//   bool areAlmostEqual(string s1, string s2) {
        //    int n=s1.size();
        //    int m=s2.size();
        //    if(n!=m)
        //    return false;
        //    map<char,int>mpp;
        //    string ans(s2.begin(),s2.end());
        
        //    for(int i=0;i<n;i++)
        //    {
        //     mpp[s1[i]]=i;
        //    }
        //    for(int j=0;j<m;j++)
        //    {
        //     if(mpp.find(ans[j])!=mpp.end())
        //     {
        //         int len=mpp[ans[j]];
        //         swap(ans[len],ans[j]);
        //         if(ans==s1)
        //         return true;
        //     }
        //     ans=s2;
        //    }
        //    return false;
 bool areAlmostEqual(string s1, string s2) {
    if(s1==s2)
    return true;
    vector<int>ans;
    map<char,int>mpp1,mpp2;
    for(int i=0;i<s1.size();i++)
    {
         mpp1[s1[i]]++;
         mpp2[s2[i]]++;
    }
    for(int i=0;i<s1.size();i++)
    {
       
        if(s1[i]!=s2[i])
        ans.push_back(1);
        if(mpp1.find(s2[i])==mpp1.end() || mpp2[s2[i]]!=mpp1[s2[i]] )
        return false;
    }

    if(ans.size()==0 || ans.size()==2)
    return true;
    return false;



    }
};