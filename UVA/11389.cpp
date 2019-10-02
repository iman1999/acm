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
int m[110], e[110], rd[110];

int main()
{
	int n, d, k;
	while (cin >> n >> d >> k && (n || d || k))
	{
		for (int i = 0; i < n; i++)
			cin >> m[i];
		for (int i = 0; i < n; i++)
			cin >> e[i];
		sort(m, m + n);
		sort(e, e + n);
		for (int i = 0, j = n - 1; i < n; i++,j--)
			rd[i] = m[i] + e[j];
		long long int sum = 0;
		for(int i=0;i<n;i++)
			if (rd[i] - d > 0)
			{
				sum += (rd[i] - d)*k;
			}
		cout << sum << endl;
	}
}