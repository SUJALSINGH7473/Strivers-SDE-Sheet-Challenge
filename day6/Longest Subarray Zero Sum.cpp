#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int, int>umap;//sum and index
  umap[0] = -1;

  int n = arr.size();
  int cnt = 0;
  int sum = 0;
  for(int i=0; i<n; i++)
  {
      sum += arr[i];
      if(umap.find(sum)!=umap.end())
      {
        cnt = max(cnt, i-umap[sum]);
      }
      else
        umap[sum] = i; 
  }
  return cnt;
}
