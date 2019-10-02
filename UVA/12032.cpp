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
int n;
int arr[110000];

bool Try(int k)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i+1]-arr[i] > k)
			return false;
		if (arr[i + 1] - arr[i] == k)
			k--;
	}
	return true;
}
int main()
{
	int tc, t = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		long long int m = 0;
		arr[0];
		for (int i = 1; i <= n; i++)
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
		cout << "Case " << t++ << ": ";
		cout << ans << endl;
	}
}