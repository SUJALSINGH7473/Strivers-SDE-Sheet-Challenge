void helper(int idx, int n, int k, vector<int>&temp, vector<vector<int>>&ans, vector<int>&arr)
{
    if(idx == n)
    {
        if(k==0)
        {
            ans.push_back(temp);
        }
        return;
    }
    //not pick the current element
    helper(idx+1, n, k, temp, ans, arr);

   
        temp.push_back(arr[idx]);
        helper(idx+1, n, k-arr[idx], temp, ans, arr);
        temp.pop_back();
    
    return ;
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    //sort(arr.begin(), arr.end());
    vector<vector<int>>ans;
    vector<int>temp;
    helper(0, n, k, temp, ans, arr);
    return ans;
}
