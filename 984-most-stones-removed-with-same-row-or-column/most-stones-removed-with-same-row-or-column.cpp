class disjointset {

public:
    vector<int> parent, size;
    disjointset(int n) {
        size.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int find(int X) {
        if (X == parent[X])
            return X;
        return parent[X] = find(parent[X]);
    }
    void unionSet(int X, int Z) {

        int upX = find(X);
        int upZ = find(Z);
        if (upX == upZ)
            return;
        if (size[X] > size[Z]) {
            parent[upZ] = upX;
            size[upX] += size[upZ];
        }

        else {
            parent[upX] = upZ;
            size[upZ] += size[upX];
        }
    }

    // vector<int>size1(n+1;1);
    // for(int i=0;i<=n;i++)
    // {
    //     size1[i]=size[i];
    // }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        int maxirow = 0;
        int maxicol = 0;
        for (auto it : stones) {
            maxirow = max(maxirow, it[0]);
            maxicol = max(maxicol, it[1]);
        }
        int V = maxirow + maxicol + 1;
        disjointset ds(V);
        //    map<int,int>mpp;
        for (auto it : stones) {
            int noderow = it[0];
            int nodecol = it[1] + maxirow + 1;
            ds.unionSet(noderow, nodecol);
            // mpp[noderow]=1;
            // mpp[nodecol]=1;
        }
        int cnt = 0;
        for (int i = 0; i <= V; i++) {
            if (ds.find(i) == i and ds.size[i] > 1) {
                cnt++;
            }
        }
        cout << cnt;
        return n - cnt;
    }
};