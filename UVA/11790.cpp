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
int n, l1[1100], w1[1100], l2[1100], w2[1100],INF = 1 << 30,W[1100];
int LIS(int l[], int w[])
{
	int mx = 0;
	for (int i = 0; i < n; i++)
	{
		W[i] = w[i];
		for (int j = 0; j < i; j++)
		{
			if (l[j] < l[i] && W[i] < W[j] + w[i])
			{
				W[i] = W[j] + w[i];
			}
		}
		if (W[i] > W[mx])
			mx = i;
	}
	return mx;
}
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc;
	int t = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> l1[i];
			l2[n - 1 - i] = l1[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> w1[i];
			w2[n - 1 - i] = w1[i];
		}
		int i = LIS(l1, w1);
		int Incw = W[i];
		i = LIS(l2, w2);
		int Decw = W[i];
		cout << "Case " << t++;
		if (Incw >= Decw)
			cout << ". Increasing (" << Incw << "). Decreasing (" << Decw << ")." << endl;
		else
			cout << ". Decreasing (" << Decw << "). Increasing (" << Incw << ")." << endl;
	}
	
}
