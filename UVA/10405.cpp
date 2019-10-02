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
string a, b;
int LC[1100][1100];
int LCS(int i, int j)
{
	if (i == a.size() || j == b.size())
		return 0;
	if (LC[i][j] == -1)
	{
		if (a[i] == b[j])
		{
			LC[i][j]= LCS(i + 1, j + 1) + 1;
		}
		else
			LC[i][j]= max(LCS(i + 1, j), LCS(i, j + 1));
	}
	return LC[i][j];
}
int main()
{
	while (getline(cin,a))
	{
		getline(cin, b);
		for (int i = 0; i < a.size(); i++)
			for (int j = 0; j < b.size(); j++)
				LC[i][j] = -1;
		cout << LCS(0,0) << endl;
	}
}