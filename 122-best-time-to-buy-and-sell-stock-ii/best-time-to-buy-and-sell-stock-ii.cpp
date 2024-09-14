class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=0,j=1;
        int sum=0;
        while(j<n)
        {
         if(prices[i]<prices[j])
         {
            sum+=prices[j]-prices[i];
            i++;
            j++;
         }
         else{
            i++;
            j++;
         }
        }
        return sum;
    }
};