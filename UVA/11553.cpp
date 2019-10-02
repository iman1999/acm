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
int n;
int a[9][9];
bool CR[9], CC[9];
int Max()
{
	int maxj, maxi;
	bool c = false;
	for(int i=0;i<n;i++)
		if (!CR[i])
		{
			for (int j = 0; j < n; j++)
				if (!c)
					maxi = i, maxj = j, c = true;
				else if (a[i][j] > a[maxi][maxj])
						maxi = i, maxj = j;
		}
	CR[maxi] = true;
	return maxi;
}
int Min(int i)
{
	int minj, mini;
	bool c = false;
	for (int j = 0; j < n; j++)
		if (!CC[j])
		{
			if (!c)
				mini = i, minj = j, c = true;
			else if (a[i][j] < a[mini][minj])
				mini = i, minj = j;
		}
	CC[minj] = true;
	return minj;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
			CC[i] = CR[i] = false;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		int co[8];
		for (int i = 0; i < n; i++)
			co[i] = i;
		int sum ;
		bool c = false;
		do
		{
			int m = 0;
			for (int i = 0; i < n; i++)
				m += a[i][co[i]];
			if (!c)
				sum = m, c = true;
			else if (sum > m)
				sum = m;
		} while (next_permutation(co, co + n));
		cout << sum << endl;
	}
}
