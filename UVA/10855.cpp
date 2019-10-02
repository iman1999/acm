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
int n, N;
char a[500][500], b[500][500], c[500][500];
void R()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			b[i][j] = a[n - j - 1][i];
	swap(a, b);
}
bool check(int x, int y)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (c[x + i][y + j] != a[i][j])
				return false;
	return true;
}
int main()
{
	while (cin >> N >> n && N || n)
	{
		for (int i = 0; i < N; i++)
				cin >> c[i];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < 4; i++)
		{
			int cnt = 0;
			for (int j = 0; j <= N - n; j++)
				for (int k = 0; k <= N - n; k++)
					if (check(j, k))
						cnt++;
			if (i)
				cout << " " << cnt;
			else
				cout << cnt;
			R();
		}
		cout << endl;
	}
}