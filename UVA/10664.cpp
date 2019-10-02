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
using namespace std;
int w[30], p[30], n, dp[300][30];
int KP(int ww,int ii)
{
	if (dp[ww][ii] != -1) return dp[ww][ii];
	int mx = 0, t;
	for (int i = ii; i < n; i++)
	{
		if (w[i] <= ww) {
			t = w[i] + KP(ww - w[i], i + 1);
			if (mx < t) mx = t;
		}
	}
	dp[ww][ii] = mx;
	return dp[ww][ii];
}
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		string s,h;
		memset(dp, -1, sizeof(dp));
		while (s == "")
			getline(cin, s);
		n = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ')
			{
				w[n] = stoi(h);
				p[n++] = w[n];
				h = "";
			}
			else
				h += s[i];
		}
		if (h != "")
			w[n++] = stoi(h);
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += w[i];
		if(sum%2==1)
			cout << "NO" << endl;
		else if (KP(sum / 2, 0) == sum / 2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
			
	}
}
