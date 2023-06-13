#include <bits/stdc++.h>
long findAns(long a, long b, long m)
{
	if(b==0)
		return 1;
	long half_power = findAns(a, b/2, m);

	if(b%2==0)
	{
		return (half_power*half_power)%m;
	}
	else
	{
		return (a*((half_power*half_power)%m))%m;
	}
}
int modularExponentiation(int x, int n, int m) {
	if(m==1)
		return 0;
	return findAns(x, n, m);
}
