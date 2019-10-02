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
int m, val[110], dp[50000];
int KP(int n, int w)
{
	for (int i = 0; i <= w; i++)
		dp[i] = 0;
	for (int i = 1; i <= n; i++)
		for (int j = w; j > 0; j--)
			if (val[i] <= j)
				dp[j] = max(dp[j], val[i] + dp[j - val[i]]);
	return dp[w];
}
int main()
{
	int tc;	
	cin >> tc;
	while (tc--)
	{
		cin >> m;
		int sum = 0;
		for (int i = 1; i <= m; i++)
		{
			cin >> val[i];
			sum += val[i];
		}
		printf("%d\n", sum - 2 * KP(m, sum / 2));

	}
}