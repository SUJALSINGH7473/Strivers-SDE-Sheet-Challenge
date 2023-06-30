#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());
	priority_queue<pair<int,pair<int, int>>>pq;
	set<pair<int, int>>s;
	s.insert({0, 0});
	pq.push({a[0]+b[0],{0, 0}});
	vector<int>ans;
	while(k>0&&!pq.empty())
	{
		ans.push_back(pq.top().first);
		int i = pq.top().second.first;
		int j = pq.top().second.second;
		pq.pop();
		if(i+1<n&&s.find({i+1,j})==s.end())
		{
			pq.push({a[i+1]+b[j],{i+1, j}});
			s.insert({i+1, j});
		}
		if(j+1<n&&s.find({i, j+1})==s.end())
		{
			pq.push({a[i]+b[j+1], {i, j+1}});
			s.insert({i, j+1});
		}
		k--;
	}
	return ans;
}
