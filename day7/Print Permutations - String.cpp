#include <bits/stdc++.h> 
void helper(int idx, int n, string s, vector<string>&ans)
{
    if(idx == n)
    {
        ans.push_back(s);
        return;
    }
    for(int i=idx; i<n ;i++)
    {
        swap(s[i], s[idx]);
        helper(idx+1, n, s, ans);
        swap(s[i], s[idx]);
    }
    return;
}
vector<string> findPermutations(string &s) {
    vector<string>ans;
    int n = s.size();
    helper(0, n, s, ans);
    return ans;
}
