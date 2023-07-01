#include <bits/stdc++.h>
void helper(int idx, int n, int target, vector<int>&arr, vector<int>&temp, 
			vector<vector<int>>&ans)
{
	if(target == 0)
	{
		ans.push_back(temp);
		return;
	}
	if(idx == n)
	{
		return;
	}
	for(int i=idx; i<n; i++)
	{
		if(i!=idx&&arr[i]==arr[i-1])
			continue;
		if(arr[i]>target)
			break;
		temp.push_back(arr[i]);
		helper(i+1, n, target-arr[i], arr, temp, ans);
		temp.pop_back();
	}
	return;
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	sort(arr.begin(), arr.end());
	vector<vector<int>>ans;
	vector<int>temp;
	helper(0, n, target, arr, temp, ans);
	return ans;
}





