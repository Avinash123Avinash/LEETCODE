class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroid) {
        sort(asteroid.begin(),asteroid.end());
        int n=asteroid.size();
        for(int i=0;i<n;i++)
        {
            if(mass>=asteroid[i])
            mass=mass+asteroid[i];
            else
            return false;
        }
        if(mass>asteroid[n-1])
        return true;
        else
        return false;
    }
};