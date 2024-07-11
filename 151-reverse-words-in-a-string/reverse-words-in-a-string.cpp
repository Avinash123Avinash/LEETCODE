class Solution {
public:
    string reverseWords(string s) {
      int n=s.length();
      stack<string>st;
      string h="";
      for(int i=0;i<n;i++)
      {
          if(s[i]!=' ')
          { string word;
          while(s[i]!=' ' && i<n)
          {
              word+=s[i];
              i++;
          }
          st.push(word);
          st.push(" ");
          }

      } 
      st.pop(); 
      while(!st.empty())
      {
          h+=st.top();
          st.pop();
      }
      return h;
    }
    
};