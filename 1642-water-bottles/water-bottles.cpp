class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles;
        int q;
        int t=numBottles;
        int r;
        while(t>=numExchange)
        {
            q=numBottles/numExchange;
            sum+=q;
            r=numBottles%numExchange;
            t=q+r;
            numBottles=t;
        }
return sum;
    }
};