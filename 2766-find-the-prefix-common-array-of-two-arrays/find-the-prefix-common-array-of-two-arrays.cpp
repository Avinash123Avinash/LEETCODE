class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int>ans;
        int cnt=0;
        map<int,int>mpp;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==B[i])
            cnt++;
            if(mpp.find(A[i])!=mpp.end())
            cnt++;
             if(mpp.find(B[i])!=mpp.end())
            cnt++;
            ans.push_back(cnt);
            mpp[A[i]]++;
            mpp[B[i]]++;

        }
        return ans;
    }
};