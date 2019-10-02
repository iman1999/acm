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
#include<functional>
#include<limits.h>
#include<bitset>
#include<stack>
#include<set>
#define ll long long int 
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvi vector<vi>
using namespace std;
int n, m, K;
ll A[350][350];
int main()
{
	int tc, t = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		ll Max = -101 * 100 * 100;
		for(int i=0;i<n;i++)
			for (int j = 0; j < n; j++)
			{
				cin >> A[i][j];
				A[i + n][j] = A[i][j + n] = A[i + n][j + n] = A[i][j];
			}
		ll s = Max;
		for(int i=0;i<2*n;i++)
			for (int j = 0; j < 2 * n; j++)
			{
				if (i > 0)A[i][j] += A[i - 1][j];
				if (j > 0)A[i][j] += A[i][j - 1];
				if (i > 0 && j > 0)A[i][j] -= A[i - 1][j - 1];
			}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = i; k < n+i&&k<2*n ; k++)
					for (int kk = j; kk < n+j&&kk<2*n; kk++)
					{
						s = A[k][kk];
						if (i > 0)
							s -= A[i - 1][kk];
						if (j > 0)
							s -= A[k][j - 1];
						if (i > 0 && j > 0)
							s += A[i - 1][j - 1];
						Max = max(Max, s);
					}
			}
		}
		cout << Max << endl;
	}
}