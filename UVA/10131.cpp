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
struct Ele
{
	int w, iq, ind;
	bool operator <(Ele x)const { if (w == x.w)return iq > x.iq; else return w < x.w; }
};
int main()
{
	Ele e[2100];
	int n = 1;
	while (cin >> e[n].w >> e[n].iq)
		e[n].ind = n, n++;
	sort(e + 1, e + n);
	int dp[2000], mx = 0, l[2000];
	dp[0] = 0;
	l[0] = 0;
	for (int i = 1; i < n; i++)
	{
		dp[i] = 0;
		l[i] = 0;
		for (int j = 1; j < i; j++)
			if (dp[j] > dp[i] && e[j].w < e[i].w&&e[i].iq < e[j].iq)
			{
				dp[i] = dp[j];
				l[i] = j;
			}
		dp[i]++;
		if (dp[mx] <= dp[i])
			mx = i;
	}
	int ans[2100];
	int i = 0;
	int t = mx - 1;
	while (mx)
	{
		ans[i++] = e[mx].ind;
		mx = l[mx];
	}
	cout << i << "\n-\n";
	for (int j = i - 1; j >= 0; j--)
		cout << ans[j] << endl;
}