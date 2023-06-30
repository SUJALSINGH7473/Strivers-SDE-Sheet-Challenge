#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    unordered_set<char>charset;
    int left = 0;
    int maxlen = 0;
    for(int i=0;i<input.size();i++)
    {
        char curr_ch = input[i];
        if(charset.find(curr_ch)!=charset.end())
        {
            while(charset.find(curr_ch)!=charset.end()&&left<=i)
            {
                charset.erase(input[left]);
                left++;
            }
        }
        else
        {
        maxlen = max(maxlen, i-left+1);
        }
        charset.insert(curr_ch);
    }
    return maxlen;
}
