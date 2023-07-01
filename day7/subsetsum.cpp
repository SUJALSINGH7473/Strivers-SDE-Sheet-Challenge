
void allsum(int idx, int n, int sum, vector<int>&a, vector<int>&ans)
{
	if(idx == n)
	{
		ans.push_back(sum);
		return ;
	}
	//pick the element 
	sum+=a[idx];
	allsum(idx+1, n, sum, a, ans);
	sum-=a[idx];
	allsum(idx+1, n, sum, a, ans);
}
vector<int> subsetSum(vector<int> &num){
	int n = num.size();
	vector<int>ans;
	allsum(0, n, 0, num, ans);
	sort(ans.begin(), ans.end());
	return ans;	
}
