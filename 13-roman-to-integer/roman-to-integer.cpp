class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        int num = 0;
      map<char, int> mpp{
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500},
        {'M', 1000}
    };
    if(n==1)
    return mpp[s[0]];
        for (int i = 1; i < n; i++) {
            if (mpp[s[i-1]] <mpp[s[i]] ) {
                num = mpp[s[i]] - mpp[s[i - 1]];
                sum += num;
                i++;
            } 
            else {
                sum += mpp[s[i - 1]];
            }
        }
        if(mpp[s[n-2]]>=mpp[s[n-1]])
        {
            sum+=mpp[s[n-1]];
        }
        return sum;
    }
};