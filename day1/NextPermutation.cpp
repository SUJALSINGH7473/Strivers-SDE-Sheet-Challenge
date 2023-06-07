#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i;
    vector<int>p=permutation;
    for(i=n-1;i>=1;i--)
    {
        if(p[i-1]<p[i])
        {
            break;
        }
    }
    if(i==0)
    {
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    int temp=p[i-1];
    int idx=n-1;
    while(idx>i-1)
    {
        if(p[idx]>temp)
            break;
        idx--;
    }
    swap(p[idx],p[i-1]);
    sort(p.begin()+i,p.end());
    return p;
}
