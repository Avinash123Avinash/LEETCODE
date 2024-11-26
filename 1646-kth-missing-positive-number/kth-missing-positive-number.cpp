class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>ans(2000,0);
        ans.resize(0);
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        for(int i=1;i<=2000;i++)
        {
            if(mpp.find(i)==mpp.end())
            ans.push_back(i);
        }

        return ans[k-1];
    }
};