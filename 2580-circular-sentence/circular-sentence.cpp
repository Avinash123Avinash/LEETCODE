class Solution {
public:
    bool isCircularSentence(string sentence) {

        int n=sentence.size();
        char first=sentence[0];
        char last=sentence[0];
        for(int i=1;i<=n;i++)
        {
            if(sentence[i]==' ')
            {
                  last=sentence[(i-1)%(n)];
                  first=sentence[(i+1)%(n)];
                  if(first!=last)
                  return false;
            }
           
        }
         last=sentence[n-1];
            first=sentence[0];
            if(last!=first)
            return false;
        return true;
    }
};