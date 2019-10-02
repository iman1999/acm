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
int m,n;
int arr[1100], ccs, nc;

bool Try(int MC)
{
	ccs = 0;
	nc = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MC)
			return false;
		if (ccs + arr[i] > MC)
			ccs = 0;
		if (ccs == 0)
			nc++;
		if (nc > m)
			return false;
		ccs += arr[i];
	}
	return true;
}
int main()
{
	while (cin >> n >> m)
	{
		long long int m = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			m += arr[i];
		}
		long long int l, h, ans;
		l = 0;
		h = m;
		ans = h;
		while (h >= l)
		{
			m = (l + h) / 2;
			if (Try(m))
			{
				ans = m;
				h = m - 1;
			}
			else
				l = m + 1;
		}
		cout << ans << endl;
	}
}