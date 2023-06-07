#include <bits/stdc++.h>
vector<long long int> generateRow(int row)
{
  vector<long long int>temp;
  long long ans=1;
  temp.push_back(ans);
  for(int col=1;col<row;col++)
  {
    ans=ans*(row-col);
    ans=ans/col;
    temp.push_back(ans);
  }
  return temp;
}
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>>ans;
  for(int i=1;i<=n;i++)
  {
    vector<long long int>temp=generateRow(i);
    ans.push_back(temp);
  }
  return ans;
}
