class Solution {
public:
    string findValidPair(string s) {
        int n = s.size();
        map<int, int> mpp;
        string ans;
        vector<int> vis(10, 0);
        for (int i = 0; i < n; i++) {
            int j = s[i] - '0';
            mpp[j]++;
        }
        cout<<mpp[2]<<endl;
        cout<<mpp[3]<<endl;
        int k=0;
        int l=1;
        while (l < n) {
            int f=s[k]-'0';
            int j = s[l] - '0';
            cout << j << endl;
            if (mpp[f] == f and mpp[j] == j and  vis[j] == 0 and vis[f] == 0  and j!=f) {
                
                    ans.push_back(s[k]);
                    ans.push_back(s[l]);
                vis[j] = 1;
                vis[f]=1;
                break;
            }
            k=l;
            l++;
        }

        return ans;
    }
};