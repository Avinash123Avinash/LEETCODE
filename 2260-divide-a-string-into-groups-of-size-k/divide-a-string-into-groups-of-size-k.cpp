class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int n = s.size();

        int i = 0;
        int j = k - 1;
        while (j < n) {
            string temp;
            for (int k = i; k <= j; k++) {
                temp.push_back(s[k]);
            }
            if (temp.size() == k)
                ans.push_back(temp);
            i = i + k;
            j = j + k;
        }
        string temp1;
        while (i < n and j>=n) {
            temp1.push_back(s[i]);
            i++;
        }
            while (temp1.size() < k and (j-k)!=n-1) {
                temp1.push_back(fill);
            }
            if(temp1.size()==k)
            ans.push_back(temp1);
    
    return ans;
}
}
;