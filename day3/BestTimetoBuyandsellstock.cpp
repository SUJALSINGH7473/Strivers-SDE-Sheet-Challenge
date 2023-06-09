#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int maxProfit=0;
    int min_so_far=prices[0];
    for(int i=1;i<n;i++)
    {
        maxProfit = max(maxProfit, prices[i] - min_so_far);
        min_so_far = min(min_so_far, prices[i]);
    }
    return maxProfit;
}
