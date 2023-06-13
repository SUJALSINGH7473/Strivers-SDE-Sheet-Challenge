#include <bits/stdc++.h>
bool possible(int row, int col, vector<vector<int>>&temp)
{
    int n=temp.size();
    int r=row-1;
    int c=col-1;
    while(r>=0&&c>=0)
    {
        if(temp[r][c]==1)
            return false;

        r--;
        c--;
    }

    r=row;
    c=col-1;
    while(c>=0)
    {
        if(temp[r][c]==1)
            return false;
        c--;
    }

    r=row+1;
    c=col-1;
    while(r<n&&c>=0)
    {
        if(temp[r][c]==1)
            return false;
        r++;
        c--;
    }
    return true;
}
void findConfiguration(int col, vector<vector<int>>&temp, vector<vector<int>>&ans, int n,
                        vector<int>&upperdiag, vector<int>&lowerdiag, vector<int>&left)
{
    if(col==n)
    {
        vector<int>t;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                t.push_back(temp[i][j]);
            }
        }
        ans.push_back(t);
        return;
    }
    for(int row=0;row<n;row++)
    {
        if(upperdiag[n-1+col-row]==0&&left[row]==0&&lowerdiag[col+row]==0)
        {
            upperdiag[n-1+col-row]=1;
            left[row]=1;
            lowerdiag[col+row]=1;
            temp[row][col] = 1;
            findConfiguration(col+1, temp, ans, n, upperdiag, lowerdiag, left);
            temp[row][col] = 0;
            upperdiag[n-1+col-row]=0;
            left[row]=0;
            lowerdiag[col+row]=0;
        }
    }
    return;
}
vector<vector<int>> solveNQueens(int n) {
    vector<vector<int>>temp(n, vector<int>(n,0));
    vector<vector<int>>ans;
    vector<int>upperdiag(2*n-1,0),lowerdiag(2*n-1,0),left(n,0);
    findConfiguration(0, temp, ans, n, upperdiag, lowerdiag, left);
    return ans;
}
