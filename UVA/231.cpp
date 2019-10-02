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
vector<int>a, b, dp, l;
int INF = 1 << 30;
int LIS(int n)
{
	int mx = 0;
	dp = vector<int>(n + 1);
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
			if (b[j] <= b[i])
				dp[i] = max(dp[i], dp[j] + 1);
		mx = max(dp[i], mx);
	}
	return mx;
}
int main()
{
	int n;
	int tc = 1;
	while (cin >> n)
	{
		if (n == -1 && a.empty())
			break;
		else if (n == -1)
		{
			if (tc != 1)
				printf("\n");
			for (int i = a.size() - 1; i >= 0; i--)
			{
				b.push_back(a[i]);
				a.pop_back();
			}
			int k = LIS(b.size());
			printf("Test #%d:\n", tc++);
			printf("  maximum possible interceptions: %d\n", k);
			while (!b.empty())
				b.pop_back();
		}
		else
		{
			a.push_back(n);
		}
	}
}