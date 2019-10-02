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
int pl[1000001], dr[1000001], np, nd, ns;
vector<int>s, e;
int main()
{
	int tc;
	cin >> tc;
	int k = 1;
	while (tc--)
	{
		bool win = false;
		cin >> np >> ns >> nd;
		for (int i = 0; i < np; i++)
			pl[i] = 1;
		for (int i = 0; i < ns; i++)
		{
			int x, y;
			cin >> x >> y;
			s.push_back(x);
			e.push_back(y);
		}
		for (int i = 0; i < nd; i++)
		{
			bool c = false;
			cin >> dr[i];
			if (np)
			{
				int x = pl[i%np] + dr[i];
				if (x > 100 && !win)
					pl[i%np] = 100, c = true;
				for (int j = 0; j < ns && !c && !win; j++)
					if (s[j] == x)
					{
						pl[i%np] = e[j];
						c = true;
					}
				if (!c && !win)
					pl[i%np] = x;
				if (pl[i%np] == 100)
					win = true;
			}
		}
		for (int i = 0; i < np; i++)
			cout << "Position of player " << i + 1 << " is " << pl[i] << "." << endl;
		while (!s.empty())
			s.pop_back(), e.pop_back();
		k++;
	}
}
