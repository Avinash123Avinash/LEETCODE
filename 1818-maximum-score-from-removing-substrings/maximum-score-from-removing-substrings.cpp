class Solution {
public:
    int maximumGain(string str, int x, int y) {
        if (y > x)
            return helper(str, y, x, 'b', 'a');
        else {
            return helper(str, x, y, 'a', 'b');
        }

    }

        int helper(string str, int high, int low, char first, char second) {
            int cnt = 0;
            string sb;
            for (char c : str) {
                if (!sb.empty() and sb.back() == first and c == second) {
                    sb.pop_back();
                    cnt += high;
                } else
                    sb.push_back(c);
            }
            string ans;
            for(char c:sb)
            {
                if(!ans.empty() and ans.back()==second and c==first)
                {
                    ans.pop_back();
                    cnt+=low;
                }
                else
                {
                ans.push_back(c);
                }
            }
        
        return cnt;
        }
};