#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	int a[20000];
	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cin >> m;
		sort(a, a + n);
		int  f, s;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if ((a[i] + a[j]) == m)
				{
					f = a[i];
					s = a[j];
				}
		cout << "Peter should buy books whose prices are " << f << " and " << s << "." << endl << endl;

	}
}