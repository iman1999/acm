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
int coins[150], dp[25000];
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc, m, n;
	cin >> tc;
	while (tc--)
	{
		cin >> m >> n;
		for (int i = 0; i < n; i++)
			cin >> coins[i];
		memset(dp, 127, sizeof(dp));
		dp[0] = 0;
		for (int i = 0; i < n; i++)
		{
			int c = coins[i];
			for (int j = m; j >= 0; j--)
				dp[j + c] = min(dp[j + c], dp[j] + 1);
		}
		int j;
		for (j = m; dp[j] > 100; j++);
		cout << j << " " << dp[j] << endl;
	}
}
