#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<string>
#include<vector>
#include<cstring>
#include<iomanip>
#include<map>
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, s, a[21];
		cin >> s >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		bool check = false;
		for (int i = 0; i < (1 << n); i++)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
				if (i & 1 << j)
					sum += a[j];
			if (sum == s)
				check = true;
		}
		if (check)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
