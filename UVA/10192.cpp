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
string s1, s2;
int L[110][110];
int lcs(string X, string Y, int m, int n)
{
	
	int i, j;

	/* Following steps build L[m+1][n+1] in bottom up fashion. Note
	that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
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
	int t = 1;
	while (getline(cin,s1))
	{
		if (s1 == "#")
			break;
		getline(cin, s2);
		cout << "Case #" << t++ << ": you can visit at most " << lcs(s1, s2, s1.size(), s2.size()) << " cities.\n";
	}
	
}
