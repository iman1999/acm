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
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int d, n;
		cin >> d >> n;
		int x, y, z;
		int killed[100][1024] = {0}, maxr = 0, maxc = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> x >> y >> z;
			int sx = x - d, sy = y - d;
			while (sx < 0)sx++;
			while (sy < 0)sy++;
			for (int j = sx; j <= x + d && j < 1024; j++)
				for (int k = sy; k <= y + d && k < 1024; k++)
					killed[j][k] += z;
		}
		int maxi = 0, maxj = 0, maxp = 0;
		for(int i=0;i<100;i++)
			for(int j=0;j<1024;j++)
				if (killed[i][j] > maxp)
				{
					maxi = i; maxj = j; maxp = killed[i][j];
				}
		cout << maxi << " " << maxj << " " << maxp << endl;
				


	}
}
