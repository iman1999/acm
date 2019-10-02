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
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		char c[30][30];
		int nu[30][30];
		int i = 0;
		cin >> c[i];
		int n = 0;
		while (c[i][n])  n++;
		for (++i; i < n; i++)
			cin >> c[i];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				nu[i][j] = c[i][j] - 48;
		int k, mx = 0;
		for (i = 0; i < n; i++)
		{
			k = 0;
			for (int j = n - 1; j >= 0; j--)
			{
				if (nu[i][j] == 1)k++;
				else k = 0;
				nu[i][j] = k;
			}
		}
		for(int i=0;i<n;i++)
			for (int j = 0; j < n; j++)
			{
				if (nu[i][j])
				{
					k = nu[i][j];
					if (k > mx)mx = k;
					for (int s = i + 1, e = 2; s < n; s++, e++)
						if (nu[s][j])
						{
							if (k > nu[s][j])k = nu[s][j];
							if (k*e > mx)
								mx = k * e;
						}
						else
							break;
				}
			}
		cout << mx << endl;
		if (tc)
			cout << endl;
	}
}
