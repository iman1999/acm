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
vector<int> a, dp,l,ans;
int n, i, INF = 1 << 30;
int LIS()
{
	int mx = 0;
	l = vector<int>(n + 1, INF);
	l[0] = -INF;
	for (int i = 0; i < n; i++)
	{
		int k = lower_bound(l.begin(), l.end(), a[i]) - l.begin() - 1;
		dp.push_back(k + 1);
		l[k + 1] = min(l[k+1],a[i]);
		mx = max(mx, dp[i]);
	}
	return mx;
}
int main()
{
	n = 0;
	while (cin >> i)
		a.push_back(i);
	n = a.size();
	int k = LIS();
	printf("%d\n-\n", k);
	for (i = n - 1; i >= 0; i--)
		if (dp[i] == k)break;
	int t = k - 1;
	ans = vector<int>(k);
	ans[t] = a[i];
	for(int j=i-1;j>=0;j--)
		if (dp[j] == dp[i] - 1)
		{
			ans[--t] = a[j];
			i = j;
		}
	for (i = 0; i < k; i++)
		printf("%d\n", ans[i]);

}