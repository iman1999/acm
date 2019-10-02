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
int N(int k, int d)
{
	int p = 0;
	for (int i = 1;; i++)
	{
		int pp = p;
		p += i * d;
		if (pp < k&&k <= p)return i;
	}
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int D;
		cin >> D;
		int c[21];
		for (int i = 0; i <= D; i++)
			cin >> c[i];
		int d, k;
		cin >> d >> k;
		int n = N(k, d);
		unsigned long long int ans=0;
		unsigned long long int cn = 1;
		for (int i = 0; i <= D; i++)
		{
			ans += c[i] * cn;
			cn *= n;
		}
		cout << ans << endl;

	}
}

