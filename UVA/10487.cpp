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
	int t = 1;
	while (cin >> n && n)
	{

		int a[1001];
		int s[100];
		int sum[1000001];

		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		int k = 0;
		for (int i = 0; i<n - 1; i++)
			for (int j = i + 1; j < n; j++)
			sum[k++] = a[i] + a[j];
		int m;
		cin >> m;
		for (int i = 0; i < m; i++)
			cin >> s[i];
		cout << "Case " << t++ << ":\n";
		for (int i = 0; i < m; i++)
		{
			int ns = sum[0];
			for (int j = 1; j < k; j++)
				if (abs(sum[j] - s[i]) < abs(ns - s[i]))
					ns = sum[j];
			cout << "Closest sum to " << s[i] << " is " << ns << ".\n";

		}
	}
}

