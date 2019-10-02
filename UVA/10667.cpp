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
int n, a[1000][1000];
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				a[i][j] = 0;
		int s;
		cin >> s;
		while (s--)
		{
			int x1, y1, x2, y2;
			cin >> x1 >> y1 >> x2 >> y2;
			for (int i = x1 - 1; i < x2; i++)
				for (int j = y1 - 1; j < y2; j++)
					a[i][j] = 1;
		}
		int  k;
		int mx = 0;
		for (int i = 0; i < n; i++)
		{
			k = 0;
			for (int j = n-1; j >= 0; j--)
			{
				if (a[i][j] == 0)k++;
				else k = 0;
				a[i][j] = k;
			}
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
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