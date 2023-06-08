#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
    while(row_start<row_end&&col_start<col_end)
    {
        int last1=mat[row_start][col_end];
        for(int i=col_end;i>col_start;i--)
        {
            mat[row_start][i] = mat[row_start][i-1];
        }

        
        int last2 = mat[row_end][col_end];
        for(int i = row_end; i > row_start + 1; i--)
        {
            mat[i][col_end] = mat[i-1][col_end];
        }
        mat[row_start+1][col_end] = last1;

        last1 = mat[row_end][col_start];
        for(int i=col_start;i<col_end-1;i++)
        {
            mat[row_end][i] = mat[row_end][i+1];
        }
        mat[row_end][col_end-1] = last2;
        for(int i=row_start;i<row_end-1;i++)
        {
            mat[i][col_start] = mat[i+1][col_start];
        }
        mat[row_end-1][col_start] = last1;
        row_start++;
        row_end--;
        col_start++;
        col_end--;
    }
}
