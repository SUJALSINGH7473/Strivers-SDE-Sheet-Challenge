#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
   vector<vector<int>>ans;
   int n=intervals.size();
   sort(intervals.begin(),intervals.end());
   int start_time=intervals[0][0];
   int end_time = intervals[0][1];
   int idx=1;
   while(idx<n)
   {
       if(intervals[idx][0]<=end_time)
       {
           end_time=max(end_time,intervals[idx][1]);
       }
       else
       {
           ans.push_back({start_time,end_time});
           start_time = intervals[idx][0];
           end_time = intervals[idx][1];
       }
       idx++;
   }
   ans.push_back({start_time, end_time});
   return ans;
}
