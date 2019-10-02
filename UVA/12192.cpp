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
using namespace std;
int n, m;
int arr[600][600];

int Check(int a[],int l)
{
	int lo, h, me;
	lo = 0;
	h = m - 1;
	if (a[h] < l)
		return -1;
	if (a[lo] >= l)
		return lo;
	while (lo <= h)
	{
		me = lo+(h-lo)/ 2;
		if (a[me] >= l && a[me - 1] < l)
			return me;
		if (a[me] >= l)
			h = me - 1;
		else if (a[me] < l)
			lo = me + 1;
	}
}
int main()
{
	while (cin >> n >> m && (n || m))
	{
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> arr[i][j];
		int q;
		cin >> q;
		while (q--)
		{
			int l, u;
			cin >> l >> u;
			int b = 0;
			for (int i = 0; i < n; i++)
			{
				int c = Check(arr[i], l);
				if (c == -1)
					continue;
				for (int j = b; j < n; j++)
				{
					int er = i + j, ec = c + j;
					if (er >= n || ec >= m || arr[er][ec] > u)
						break;
					if (j + 1 > b)
						b = j + 1;
				}
			}
			cout << b << endl;
		}
		cout << "-\n";
	}
}