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
using namespace std;
int main()
{
	int n, m;
	int f[10], b[10];
	double d[1000];
	while (cin >> n &&n)
	{
		cin >> m;
		for (int i = 0; i < n; i++)
			cin >> f[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		int k = 0;
		double Max;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				d[k++] = (double)b[i] / f[j];
		sort(d, d + k);
		Max = d[1] / d[0];
		for (int i = 1; i < k - 1; i++)
			if ((d[i + 1] / d[i]) > Max)
				Max = d[i + 1] / d[i];
		Max = (Max * 100 + 0.5);
		Max = int(Max);
		Max = Max / 100;
		cout << setprecision(2) << fixed << Max << endl;

	}
}
