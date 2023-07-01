#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n = sizeof(arr)/sizeof(arr[0]);
    int idx = n-1;
    int min_coins = 0;
    while(idx>=0&&amount>0)
    {
        int d = amount/arr[idx];
        amount = amount - d*arr[idx];
        min_coins+=d; 
        idx--;
    }
    return min_coins;
}
