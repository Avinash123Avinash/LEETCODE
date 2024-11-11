class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
       int n=players.size();
       int m=trainers.size();
       sort(players.begin(),players.end());
       sort(trainers.begin(),trainers.end());
       int i=0;
       int j=0;
       int cnt=0;
       while(i<n and j<m)
       {
        if(players[i]<=trainers[j])
        {
            cnt++;
            i++;
            j++;
        }
        else
        j++;
       } 
       return cnt;
    }
};