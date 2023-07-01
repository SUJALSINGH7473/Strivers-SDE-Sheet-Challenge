#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n = start.size();
    vector<pair<int, int>>activity_schedule;
    for(int i=0;i<n;i++)
    {
        activity_schedule.push_back({finish[i], start[i]});
    }
    sort(activity_schedule.begin(), activity_schedule.end());
    int cnt = 1;
    int end = activity_schedule[0].first;
    for(int i=1;i<n;i++)
    {
        if(activity_schedule[i].second>=end)
        {
            end = max(end, activity_schedule[i].first);
            cnt++;
        }
    }
    return cnt;
}
