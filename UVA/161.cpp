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
	int X[143], n;
	while (cin >> X[0] && X[0]) {
		for (n = 1; cin >> X[n] && X[n]; ++n);
		int Y[20000] = {};
		for (int i = 0; i<n; ++i) {
			int p = X[i] * 2;
			for (int j = 0; j <= 18000; j += p)
				++Y[j], --Y[j + X[i] - 5];
		}

		int s = 0, c = 0;
		bool check = false;
		for (int i = 0; i <= 18000&&!check; ++i) 
			if (Y[i])
			{
				s += Y[i];
				if (s == n && ++c== 2)
				{
					printf("%02d:%02d:%02d\n", i / 3600, (i / 60) % 60, i % 60);
					check = true;
				}
			}
		if (!check)
			cout << "Signals fail to synchronise in 5 hours\n";
	}
}
