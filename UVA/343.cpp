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
#include<set>
#define ll long long int 
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvi vector<vi>
using namespace std;
ll Base(string s,int b)
{
	ll ans = 0;
	int n = s.size(), cnt = 1;
	for (int i = 0; i < n; i++,cnt++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
			ans += (s[i] - 48)*pow(b, n - cnt);
		else
			ans += (s[i] - 55)*pow(b, n - cnt);
	}
	return ans;
}
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		ll ans1, ans2;
		bool c = false;
		int i = 2, j, fj = 2;
		for (int k = 0; k < a.size(); k++)
			if (a[k] >= '0'&&a[k] <= '9')
			{
				if (a[k] - 47 > i)
					i = a[k] - 47;
			}
			else if (a[k] - 54 > i)
				i = a[k] - 54;
		for (int k = 0; k < b.size(); k++)
			if (b[k] >= '0'&&b[k] <= '9')
			{
				if (b[k] - 47 > fj)
					fj = b[k] - 47;
			}
			else if (b[k] - 54 > fj)
				fj = b[k] - 54;
				
		for (; i < 37&&!c; i++)
		{
			ans1 = Base(a, i);
			for (j = fj; j < 37 && !c; j++)
			{
				ans2 = Base(b, j);
				if (ans1 == ans2)
					c = true;
			}
		}
		if (c == true)
			cout << a << " (base " << i - 1 << ") = " << b << " (base " << j - 1 << ")\n";
		else
			cout << a << " is not equal to " << b << " in any base 2..36\n";
	}
}