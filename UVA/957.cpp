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
int a[101000];
int main()
{
	int n;
	while (cin >> n)
	{
		int p;
		cin >> p;
		for (int i = 0; i < p; i++)
			cin >> a[i];
		sort(a, a + p);
		int m = 0, s = 0, e = 0;
		for (int i = 0; i < p; i++)
		{
			int j = i + n;
			if (j < p)
			{
				if (a[j] - a[i] < n)
				{
					while (a[j] - a[i] < n&&j<p)
						j++;
					int k = j - i;
					if (k > m)
					{
						m = k;
						s = a[i];
						e = a[j - 1];
					}
				}
				else
				{
					while (a[j] - a[i] >= n)
						j--;
					int k = j - i+1;
					if (k > m)
					{
						m = k;
						s = a[i];
						e = a[j];
					}
				}
			}
			else
			{
				while (j >= p)
					j--;
				if (j > i&&(j-i+1)>m)
				{
					if (a[j] - a[i] < n)
					{
						while (a[j] - a[i] < n&&j<p)
							j++;
						int k = j - i;
						if (k > m)
						{
							m = k;
							s = a[i];
							e = a[j - 1];
						}
					}
					else
					{
						while (a[j] - a[i] >= n)
							j--;
						int k = j - i+1;
						if (k > m)
						{
							m = k;
							s = a[i];
							e = a[j];
						}
					}
				}
			}
		}
		cout << m << " " << s << " " << e << endl;

	}
}