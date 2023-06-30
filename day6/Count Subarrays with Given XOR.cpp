#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    int n = arr.size();
    int cnt=0;
    unordered_map<int, int>cntxormap;
    cntxormap[0]=1;
    int curr_xor=0;
    for(int i=0;i<n;i++)
    {
        curr_xor = curr_xor^arr[i];
        if(cntxormap.find(curr_xor^x)!=cntxormap.end())
        {
            cnt+=cntxormap[curr_xor^x];
        }
        cntxormap[curr_xor]+=1;
    }
    return cnt;
}
