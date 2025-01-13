class Solution {
public:
// 9:11
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ansi;
        vector<int>ansj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    ansi.push_back(i);
                    ansj.push_back(j);
                }
            }
        }
        // cout<<ansi[0]<<endl;
        // cout<<ansj[0];
        for(int i=0;i<ansi.size();i++)
        {
            int k=ansi[i];
            for(int j=0;j<m;j++)
            {
                matrix[k][j]=0;
            }
        }
        for(int j=0;j<ansj.size();j++)
        {
            int k=ansj[j];
            for(int i=0;i<n;i++)
            {
                matrix[i][k]=0;
            }
        }
        

    
    }

};