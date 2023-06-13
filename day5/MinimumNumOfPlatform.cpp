int calculateMinPatforms(int at[], int dt[], int n) {
   sort(at,at+n);
   sort(dt,dt+n);

   int arr_idx=0,dest_idx=0;
   int plat_need=0;
   int max_plat_need=1;
   while(arr_idx<n&&dest_idx<n)
   {
       if(at[arr_idx]<=dt[dest_idx])
       {
           plat_need++;
           arr_idx++;
       }
       else{
           plat_need--;
           dest_idx++;
       }
       max_plat_need = max(max_plat_need, plat_need);
   }
    return max_plat_need;
}
