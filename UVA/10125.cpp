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
using namespace std;
int main()
{
	int n;
	long long int a[1000];
	while (cin >> n && n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		bool ch = false;
		long long int res;
		for (int i = n-1; i >= 3 && !ch; i--)
			for (int j = 0; j < n && !ch; j++)
			{
				if (i == j)
					continue;
				int k = 0, d = n-1;
				while (k == i || k == j)k++;
				while (d == i || d == j)d--;
				while (k < d && !ch)
				{
					int diff = a[i] - (a[j] + a[k] + a[d]);
					if (diff == 0)
					{
						res = a[i];
						ch = true;
					}
					else if (diff > 0)
					{
						k++;
						while (k == i || k == j)k++;
					}
					else
					{
						d--;
						while (d == i || d == j)d--;
					}
				}


			}
		if (ch)
			cout << res << endl;
		else
			cout << "no solution" << endl;
	}
}

