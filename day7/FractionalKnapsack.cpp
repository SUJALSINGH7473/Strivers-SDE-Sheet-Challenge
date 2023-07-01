#include <bits/stdc++.h> 
bool cmp(pair<int, int>&a, pair<int, int>&b)
{
    return ((double)a.second/a.first)>=((double)b.second/b.first);
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    sort(items.begin(), items.end(), cmp);
    int i=0;
    double val = 0;
    while(i<n&&w-items[i].first>=0)
    {
        w-=items[i].first;
        val+=items[i].second;
        i++;
    }
    if(i<n&&w>0)
        val+=((double)w/items[i].first)*items[i].second;
    return val;
}
