#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<iomanip>
#include<map>
#include <cstdlib> 
#include <cstdio>
#include<cmath>
#include <cstring>
#include<bitset>
#include<queue>
#include<list>
#include<sstream>
using namespace std;
int a[3000], b[3000], dp[3000], l[3000];
int INF = 1 << 30;
int LIS(int n)
{
	int mx = 0;
	for (int i = 0; i < n; i++)
		l[i] = INF;
	l[0] = -INF;
	for (int i = 0; i < n; i++)
	{
		int lo = lower_bound(l, l + n, a[i]) - l - 1;
		dp[i] = lo + 1;
		l[lo + 1] = min(l[lo + 1], a[i]);
		mx = max(dp[i], mx);
	}
	return mx;
}
int main()
{
	int a, b, c, d;
	while (cin >> a >> b >> c >> d &&( a || b || c || d))
	{
		int t;
		if (c == 0)
			c = 24;
		if (a == 0)
			a = 24;
		if (d < b)
		{
			if (a == c)
				t = 24 * 60 - (b - d);
			else if (a > c)
				t = (24 - a) * 60 + c * 60 - (b - d);
			else
				t = (c - a) * 60 - (b - d);
		}
		else if (d > b)
		{
			if (a == c)
				t = (d - b);
			else if (a > c)
				t = (24 - a) * 60 + c * 60 + (d - b);
			else
				t = (c - a) * 60 + (d - b);
		}
		else
		{
			if (a == c)
				t = 0;
			else if (a > c)
				t = (24 - a) * 60 + c * 60;
			else
				t = (c - a) * 60 ;
		}
		cout << t << endl;
	}

}