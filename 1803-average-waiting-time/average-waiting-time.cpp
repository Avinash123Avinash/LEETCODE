class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        double ft=customers[0][0]+customers[0][1];
        double wt=ft-customers[0][0];
        for(int i=1;i<n;i++)
        { 
            if(ft>=customers[i][0])
            {
            ft+=customers[i][1];
            }
            else
            {
                ft=customers[i][0]+customers[i][1];
            }
            wt+=ft-customers[i][0];
        }
        return (wt/n);
    }
};