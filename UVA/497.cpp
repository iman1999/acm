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
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		mx = max(dp[i], mx);
	}
	return mx;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string s;
		bool c = false;
		while (getline(cin,s))
		{
			if (s == ""&&c)
				break;
			else if(s!="")
			{
				a.push_back(stoi(s));
				c = true;
			}
		}
		if (!a.empty())
		{
			int k = LIS(a.size());
			int i = a.size() - 1;
			for (; i >= 0; i--)
				if (dp[i] == k)break;
			b.push_back(a[i]);
			for(int j=i-1;j>=0;j--)
				if (dp[j] == dp[i] - 1)
				{
					b.push_back(a[j]);
					i = j;
				}
			printf("Max hits: %d\n", k);
			for (int j = b.size() - 1; j >= 0; j--)
				printf("%d\n", b[j]);
			while (!a.empty())
				a.pop_back();
			while (!b.empty())
				b.pop_back();
		}
		if (tc)
			printf("\n");
	}
}