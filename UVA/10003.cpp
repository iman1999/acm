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
int n, c[60], dp[60][60];
int INF = 1 << 30;
int main()
{
	int l;
	while (cin >> l && l)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> c[i];
		c[0] = 0;
		c[n + 1] = l;
		n++;
		for(int i=1;i<=n;i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (j + 1 == i)
					dp[i][j] = 0;
				else
				{
					dp[i][j] = INF;
					for (int k = j + 1; k < i; k++)
						dp[i][j] = min(dp[i][k] + dp[k][j], dp[i][j]);
					dp[i][j] += c[i] - c[j];
				}
			}
		}
		printf("The minimum cutting is %d.\n", dp[n][0]);
	}
}
