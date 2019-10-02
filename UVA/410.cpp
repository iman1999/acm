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
int se[11], m[6][2];
int main()
{
	int c, s;
	int tc = 1;
	while (cin >> c >> s)
	{
		double Im = 0, A = 0;
		for (int i = 0; i < 10; i++)
			se[i] = 0;
		for (int i = 0; i < s; i++)
		{
			cin >> se[i];
			A += se[i];
		}
		A /= c;
		int i = 0, j = (2 * c) - 1;
		sort(se, se + (2 * c));
		while (i < j)
		{
			m[i][0] = se[i];
			m[i][1] = se[j];
			i++;
			j--;
		}
		cout << "Set #" << tc++ << endl;
		for (int i = 0; i < c; i++)
		{
			if (i < 10)
				cout << " " << i << ":";
			else
				cout << i << ":";
			for (int j = 0; j < 2; j++)
				if (m[i][j])
					cout << " " << m[i][j];
			cout << endl;
		}
		for (int i = 0; i < c; i++)
			Im += abs((m[i][0] + m[i][1]) - A);
		cout << "IMBALANCE = " << setprecision(5) << fixed << Im << endl;
		cout << endl;
	}
}
