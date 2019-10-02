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
struct Dolls
{
	int w, h;
	bool operator <(const Dolls &a)
	{
		return (h > a.h) || (h == a.h&&w < a.w);
	}
};
Dolls d[22000];
int dp[22000], l[22000], INF = 1 << 30, n;
//bool doll[22000];
/*int LIS()
{
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		if (!doll[i])
		{
			dp[i] = 1;
			R[i] = -1;
			for (int j = 0; j < i; j++)
			{
				if (d[j].w < d[i].w&&d[j].h < d[i].h && dp[i] <= dp[j] + 1 && !doll[j])
				{
					if(dp[i]<dp[j]+1)
					if (dp[i]<dp[j] + 1||(dp[i] == dp[j] + 1&&d[j].h<d[R[i]].h))
					{
						dp[i] = dp[j] + 1;
						R[i] = j;
					}
				}
			}
			if (dp[i] > dp[mx])
				mx = i;
		}
	}
	return mx;
}*/
int LISS()
{
		l[0] = INF;
		int cn = 1, mx = 0;
		for (int i = 0; i < n; i++)
		{
			int lo = lower_bound(l, l + cn, d[i].w + 1) - l;
			if (lo == cn - 1)
			{
				mx++;
				l[cn++] = INF;
			}
			l[lo] = d[i].w;
		}
		return mx;
}
int main() 
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			int a, b;
			scanf("%d", &d[i].w);
			scanf("%d", &d[i].h);
		}
		sort(d, d + n);
		printf("%d\n", LISS());
	}
}
