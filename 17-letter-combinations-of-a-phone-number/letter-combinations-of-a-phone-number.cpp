class Solution {
public:
void f(string& digits,string&temp,vector<string>&ans,int i,map<char,string>&mpp)
{
    if(temp.size()==digits.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int j=0;j<mpp[digits[i]].size();j++)
    {
        string temp1=mpp[digits[i]];
        temp+=temp1[j];
         cout<<temp<<endl;
         f(digits,temp,ans,i+1,mpp);
         temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
     int n=digits.size();
     map<char,string>mpp={
         {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
     };
     string temp;
     vector<string>ans;
     if(digits.size()==0)
     {
        return ans;
     }
        f(digits,temp,ans,0,mpp);
     

   return ans;
    
    }
};