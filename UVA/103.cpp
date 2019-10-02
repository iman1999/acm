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
int box[40][15], k, n, indx[40];
int main()
{
	while (cin >> k >> n)
	{
		for (int i = 0; i < k; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> box[i][j];
			indx[i] = i + 1;
		}
		for (int i = 0; i < k; i++)
			sort(box[i], box[i] + n);
		for (int i = 0; i < k - 1; i++)
			for (int j = i + 1; j < k; j++)
			{
				int ss = 0;
				while (box[i][ss] == box[j][ss])
					ss++;
				if (ss<n&&box[i][ss] > box[j][ss])
					swap(box[i], box[j]), swap(indx[i], indx[j]);
			}

		int dp[40], mx = 0, ans[40],R[40];
		memset(dp, -1, sizeof(dp));
		memset(ans, -1, sizeof(ans));
		dp[0] = 1;
		for (int i = 1; i < k; i++)
		{
			dp[i] = 1;
			R[i] = -1;
			for (int j = 0; j < i; j++)
			{
				bool c = true;
				for (int s = 0; s < n; s++)
					if (box[i][s] <= box[j][s])
						c = false;
				if (c&&dp[i] < dp[j] + 1)
				{
					dp[i] = dp[j] + 1;
					R[i] = j;
				}
			}
			if (dp[mx] < dp[i])
				mx = i;
		}
		int i, t = 0;
		i = mx;
		while(i>=0)
			{
				ans[t++] = indx[i];
				i = R[i];
			}
		cout << dp[mx] << endl;
		cout << ans[t-1];
		for (i = t-2; i >= 0; i--)
			cout << " " << ans[i];
		cout << endl;
	}
}
