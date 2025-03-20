class Solution {
public:
    int longestWPI(vector<int>&arr) {
        int n=arr.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int td=0;
            int ntd=0;
            for(int j=i;j<n;j++)
            {
                if(arr[j]>8)
                td++;
                else if(arr[j]<=8)
                ntd++;
                if(td>ntd)
                {
                    maxi=max(maxi,td+ntd);
                }
            }
        }

        return maxi!=INT_MIN?maxi:0;
    }
};