int longestSubSeg(vector<int> &arr , int n, int k){
    int start=0,end=0,cnt_zero=0;
    int ans=0;
    while(end<n)
    {
        if(arr[end]==0)
        {
            cnt_zero++;
            if(cnt_zero>k)
            {
                while(start<n&&arr[start]==1)
                {
                    start++;
                }
                start++;
                cnt_zero--;
            }
        }
        ans=max(ans, end-start+1);
        end++;
    }
    return ans;

}
