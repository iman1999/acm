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
	string s;
	while (cin >> s&&s!="0")
	{
		string h;
		int n, a[11000];
		int i = 0;
		while (s[i] != ':')
			h += s[i++];
		n = stoi(h);
		for (i = 0; i < n; i++)
			cin >> a[i];
		bool c = true, d[10001] = {};
		int dd;
		for (int i = 0; i < n&&c; i++)
		{
			d[a[i]] = true;
			for (int j = i + 1; j < n&&c; j++)
			{
				d[a[j]] = true;
				dd = a[i] - a[j];
				if (a[j] - dd >= 0 && a[j] - dd < n)
					if (d[a[j] - dd])
						continue;
					else
						c = false;
			}
			for (int j = i + 1; j < n; j++)
				d[a[j]] = false;
		}
		if (c)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}