#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int mis_ele,rep_ele;
	for(int i=0;i<n;i++)
	{
		arr[arr[i]%(n+1)-1]+=(n+1);
	}
	for(int i=0;i<n;i++)
	{
		if((arr[i]/(n+1))>1)
		{
			rep_ele=i+1;
		}
		if(arr[i]<=n)
		{
			mis_ele=i+1;
		}
	}
	return {mis_ele, rep_ele};
}
