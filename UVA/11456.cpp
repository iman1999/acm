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
#include<functional>
#include<limits.h>
#include<bitset>
#include<stack>
using namespace std;
int a[3000], dp1[3000], dp2[3000], n;
int LIS()
{
	int mx = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (a[j] < a[i])
				dp1[i] = max(dp1[i], dp1[j]);
			if (a[j] > a[i])
				dp2[i] = max(dp2[i], dp2[j]);
		}
		dp1[i]++, dp2[i]++;
		mx = max(mx, dp1[i] + dp2[i] - 1);
	}
	return mx;
}
int main() 
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		memset(dp1, 0, sizeof(dp1));
		memset(dp2, 0, sizeof(dp2));
		for (int i = n; i > 0; i--)
			cin >> a[i];
		cout << LIS() << endl;
	}
}