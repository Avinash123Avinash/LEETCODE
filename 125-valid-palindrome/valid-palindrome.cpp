class Solution {
public:
void fun(string &temp,int f,int l)
{
    if(f>=l)
    return;
    swap(temp[f],temp[l]);
    fun(temp,f+1,l-1);
}
    bool isPalindrome(string s) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))

            ans.push_back(tolower(s[i]));
            
        }
        int m=ans.size();
        cout<<m;
        if(m==0)
        return true;
        string temp(ans.begin(),ans.end());
        fun(temp,0,m-1);
        return ans==temp;

    }
};