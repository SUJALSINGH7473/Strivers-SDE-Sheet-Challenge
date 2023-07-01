long long findNthRoot(int mid, int n, int m)
{
  if(n==0)
    return 1;
  long long mul = findNthRoot(mid, n/2, m);
  long long product = mul*mul;
  if(mul>m||product>m)
    return 1e9;
  
  if(n%2==0)
    return product;
  return (long long)mid*product;
}
// int findNthRoot(int mid, int n, int m)
// {
//   long long product = 1;
//   for(int i=1;i<=n;i++)
//   {
//     product*=mid;
//     if(product>m)
//       return 2;
//   }
//   if(product == m)
//     return 1;
//   return 0;
// }
int NthRoot(int n, int m) {
  int low = 1, high = m;
  while(low<=high)
  {
    int mid = (low+high)>>1;
    int midn = findNthRoot(mid, n, m);
    if(midn==m)
      return mid;
    else if(midn>m)
      high = mid-1;
    else 
      low = mid+1;
  }
  return -1;
}
