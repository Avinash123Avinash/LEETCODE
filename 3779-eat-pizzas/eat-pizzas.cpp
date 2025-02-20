class Solution {
public:
    long long maxWeight(vector<int>& arr) {
        int n=arr.size();
        long long sum=0;
        int j=n-1;
        sort(arr.begin(),arr.end());
        for(int i=1;i<=(n/4);i+=2)
        {
                sum+=arr[j];
                j--;
        }
        j--;
           for(int i=2;i<=(n/4);i+=2)
           {
            sum+=arr[j];
            j-=2;
           }
            return sum;
       
    }
};