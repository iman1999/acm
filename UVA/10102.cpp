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
#include <cstring>
#include<bitset>
#include<queue>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		char c[105][105];
		int  tx[1005], ty[1005], ox[1001], oy[1001], ts = 0, os = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				cin >> c[i][j];
				if (c[i][j] == '3')
					tx[ts] = i, ty[ts++] = j;
				else if (c[i][j] == '1')
					ox[os] = i, oy[os++] = j;
			}
		int mi = -1;

		for (int i = 0; i < os; i++)
		{
			int q;
			q = abs(ox[i] - tx[0]) + abs(oy[i] - ty[0]);
			for (int j = 0; j < ts; j++)
				q = min(q, abs(ox[i] - tx[j]) + abs(oy[i] - ty[j]));
			mi = max(mi, q);
		}
		cout << mi << endl;

	}
}
