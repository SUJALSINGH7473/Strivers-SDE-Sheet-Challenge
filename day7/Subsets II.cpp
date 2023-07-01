#include <bits/stdc++.h> 
void finduniqueSets(int idx, int n, vector<int>&arr, vector<int>&temp, vector<vector<int>>&ans)
{
    ans.push_back(temp);
    if(idx == n)
    {
        return ;
    }
    for(int i = idx; i<n; i++)
    {
        if(i!=idx&&arr[i]==arr[i-1])
            continue;
        //picking the element
        temp.push_back(arr[i]);
        finduniqueSets(i+1, n, arr, temp, ans);
        temp.pop_back();
        // finduniqueSets(i+1, n, arr, temp, ans);
        //not picking up the element
       
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>>ans;
    vector<int>temp;
    finduniqueSets(0, n, arr, temp, ans);
    return ans;
}
