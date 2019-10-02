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
using namespace std;
int main()
{
	int t = 1, n, a[20];
	long long int mx, p;
	while (cin >> n)
	{
		mx = 0, p = 1;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			p = a[i];
			mx = max(mx, p);
			for (int j = i + 1; j < n; j++)
			{
				p *= a[j];
				mx = max(mx, p);
			}
		}
		cout << "Case #" << t++ << ": The maximum product is " << mx << ".\n\n";
	}
}