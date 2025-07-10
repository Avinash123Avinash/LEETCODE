class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m=part.size();
        while(!s.empty())
        {
           long long n=s.find(part);
          if (n == string::npos) {
                 break;
}
          
           else
           {
            s.erase(n,m);
           }
        

        }
        return s;
    }
};