class Solution {
public:
bool f(int ind,int row,int col,vector<vector<char>>& board,string &word,int n,int m,int l)
{
    if(ind==l)
    return true;
    int delrow[4]={-1,1,0,0};
    int delcol[4]={0,0,-1,1};
    char temp=board[row][col];
    board[row][col]='#';
    for(int k=0;k<4;k++)
    {
        int nrow=row+delrow[k];
        int ncol=col+delcol[k];
        if(nrow>=0 and ncol>=0 and nrow<n and ncol<m and board[nrow][ncol]!='#' and board[nrow][ncol]==word[ind])
        {
             if(f(ind+1,nrow,ncol,board,word,n,m,l))
             return true;
            //  temp=board[nrow][ncol];
        }
    }
    board[row][col]=temp;
    // f(ind,row,col,board,word,n,m,l);
    return false;

}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        int l=word.size();
        int ind=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[ind])
                {
                  if(f(ind+1,i,j,board,word,n,m,l))
                  return true;
                }
            }
        }
     return false;  
    }
};