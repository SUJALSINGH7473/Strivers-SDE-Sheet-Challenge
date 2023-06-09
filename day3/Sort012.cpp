#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int cnt_zero=0, cnt_one=0, cnt_two=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
         cnt_zero++;
      else if(arr[i]==1)
         cnt_one++;
      else
         cnt_two++;
   }

   int ind=0;
   while(cnt_zero--)
      arr[ind++] = 0;
   while(cnt_one--)
      arr[ind++] = 1;
   while(cnt_two--)
      arr[ind++] = 2;
}
