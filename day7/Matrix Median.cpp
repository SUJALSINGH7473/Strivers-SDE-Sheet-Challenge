#include <bits/stdc++.h>
int cntPossible(vector<int>&row, int mid)
{
    int n = row.size();
    int low = 0, high = row.size()-1;
    while(low<=high)
    {
        int md = (low+high)/2;
        if(row[md]<=mid)
            low = md+1;
        else
            high = md-1;
    }
    return low;
}
int getMedian(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m=matrix[0].size();
    int low = 1, high = 1e9;
    while(low<=high)
    {
        int mid = (low + high)/2;
        int cnt =0;

        for(int i=0;i<matrix.size();i++)
            cnt += cntPossible(matrix[i], mid);

        if(cnt<=n*m/2)
            low = mid+1;
        else
            high = mid-1;
        
    }
    return low;
}   
