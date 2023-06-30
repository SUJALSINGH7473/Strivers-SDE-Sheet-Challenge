#include<bits/stdc++.h>
int partition(vector<int>&arr, int low, int high)
{
	int pivot = arr[low];
	int i = low, j = high;
	while(i<j)
	{
		while(arr[i]<=pivot&&i<=high-1)
		{
			i++;
		}
		while(arr[j]>pivot&&j>=low+1)
			j--;
		if(i<j)
			swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j;
}
int quickselect(vector<int>&arr, int low, int high, int k)
{
	if(low<=high)
	{
		int pidx = partition(arr, low, high);
		if(pidx==k)
			return arr[pidx];
		if(pidx<k)
		{
			return quickselect(arr, pidx+1, high, k);
		}
		else
			return quickselect(arr, low, pidx-1, k);
	}
	return -1;
}
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	if(n==1)
		return {arr[0], arr[0]};
	vector<int>ans;
	ans.push_back(quickselect(arr, 0, n-1, k-1));
	ans.push_back(quickselect(arr, 0, n-1, n-k));
	return ans;
}
