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
int n, m, a[1000][1000];
int main()
{
	while (cin >> n >> m&&n||m)
	{
		int b;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		int  k;
		int mx = 0;
		for (int i = 0; i < n; i++)
		{
			k = 0;
			for (int j = m-1; j >= 0; j--)
			{
				if (a[i][j] == 0)k++;
				else k = 0;
				a[i][j] = k;
			}
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (a[i][j])
				{
					k = a[i][j];
					if (k > mx) mx = k;
					for (int s = i + 1, e = 2; s < n; s++, e++)
						if (a[s][j])
						{
							if (k > a[s][j])k = a[s][j];
							if (k*e > mx)
								mx = k * e;
						}
						else
							break;
				}
		cout << mx << endl;
	}
}