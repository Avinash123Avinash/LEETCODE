class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroid) {
        sort(asteroid.begin(), asteroid.end());
        long long mass1 = mass;
        int n = asteroid.size();
        for (int i = 0; i < n; i++) {
            if (mass1 >= asteroid[i])
                mass1 = mass1 + asteroid[i];
            else
                return false;
        }

        return true;
    }
};