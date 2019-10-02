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
int lcs(int *X, int *Y, int m, int n)
{
	int L[110 + 1][110 + 1];
	int i, j;

	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (i == 0 || j == 0)
				L[i][j] = 0;

			else if (X[i - 1] == Y[j - 1])
				L[i][j] = L[i - 1][j - 1] + 1;

			else
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}

	/* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
	return L[m][n];
}
int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n1, n2, t = 1;
	int s1[110], s2[110];
	while (cin>>n1>>n2&&n1||n2)
	{
		if (t > 1)
			cout << endl;
		for (int i = 0; i < n1; i++)
			cin >> s1[i];
		for (int i = 0; i < n2; i++)
			cin >> s2[i];
		cout << "Twin Towers #" << t++ << endl;
		cout << "Number of Tiles : " << lcs(s1, s2, n1, n2) << endl;
	}
}
