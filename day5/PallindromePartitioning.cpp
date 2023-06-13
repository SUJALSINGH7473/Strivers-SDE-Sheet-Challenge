#include <bits/stdc++.h> 
bool checkPallindrome(int i, int j, string&s)
{
    while(i<=j)
    {
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}
void findAllPP(int idx, string&s, vector<string>&temp, vector<vector<string>>&ans, int n)
{
    if(idx==n)
    {
        ans.push_back(temp);
    }
    for(int i=idx;i<n;i++)
    {
        if(checkPallindrome(idx,i,s))
        {
            temp.push_back(s.substr(idx, i-idx+1));
            findAllPP(i+1, s, temp, ans, n);
            temp.pop_back();
        }
    }
    return;
}
vector<vector<string>> partition(string &s) 
{
    int n=s.length();
    vector<vector<string>>ans;
    vector<string>temp;
    findAllPP(0, s, temp, ans, n);
    return ans;
}
