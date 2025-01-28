class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        // here we can allot all values to the map
      map<char, int> mpp{
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500},
        {'M', 1000}
    };
    // here we check the base case for the single element
    
        for(int i=0;i<n;i++)
        {
            // here at each cosecutive step check the element
            if(i+1<n and mpp[s[i]]<mpp[s[i+1]])
            {
                sum-=mpp[s[i]];
            }
            else
            {
                sum+=mpp[s[i]];
            }
        }
        return sum;
    }
};