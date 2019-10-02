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
#include<bitset>
#include<queue>
using namespace std;
bool check(bool c[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		int s = 0;
		for (int j = 0; j < 5; j++)
			if (c[i][j])
				s++;
		if (s == 5)
			return true;
	}
	for (int i = 0; i < 5; i++)
	{
		int s = 0;
		for (int j = 0; j < 5; j++)
			if (c[j][i])
				s++;
		if (s == 5)
			return true;
	}
	int s = 0;
	for (int i = 0; i < 5; i++)
	{
		int j = i;
		if (c[i][j])
			s++;
	}
	if (s == 5)
		return true;
	s = 0;
	for (int i = 0; i < 5; i++)
	{
		int j = 4 - i;
		if (c[i][j])
			s++;
	}
	if (s == 5)
		return true;
	return false;
}
int main()
{
	int tc;
	int a[5][5];
	cin >> tc;
	while (tc--)
	{
		bool c[5][5] = { false }, t = false, n[76] = { false };
		c[2][2] = true;
		for (int i = 0; i < 5; i++)
		{
				for (int j = 0; j < 5; j++)
				{
					if (j == 2 && i == 2)
						j++;
					cin >> a[i][j];
					n[a[i][j]] = true;
				}
		}
		int ans;
		for (int i = 0; i < 75; i++)
		{
			int b;
			cin >> b;
			if (!n[b])
				continue;
			bool v = false;
			for (int j = 0; j < 5&&!v; j++)
				for (int k = 0; k < 5 && !v; k++)
				{
					if (j == 2 && k == 2)
						k++;
					if (a[j][k] == b)
						c[j][k] = true, v = true;
				}
			if (check(c) && !t)
				ans = i, t = true;
				
		}
		cout << "BINGO after " << ans+1 << " numbers announced" << endl;
	}
}
