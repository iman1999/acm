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
string ss[1000100];
char Pr(int a)
{
	if (a < 10)
		return a + 48;
	else if (a == 10)
		return 'A';
	else if (a == 11)
		return 'B';
	else if (a == 12)
		return 'C';
	else if (a == 13)
		return 'D';
	else if (a == 14)
		return 'E';
	else
		return 'F';
}
ll Basetoten(string s, int b)
{
	ll ans = 0;
	int n = s.size(), cnt = 1;
	for (int i = 0; i < n; i++, cnt++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
			ans += (s[i] - 48)*pow(b, n - cnt);
		else
			ans += (s[i] - 55)*pow(b, n - cnt);
	}
	return ans;
}
string Tentobase(ll a, int b)
{
	string res;
	while (a >= b)
	{
		res += Pr(a%b);
		a /= b;
	}
	res += Pr(a);
	string ans;
	for (int i = res.size() - 1; i >= 0; i--)
		ans += res[i];
	return ans;
}
int main()
{
	string s,ss;
	int a, b;
	while (getline(cin,ss))
	{
		bool c = false;
		int cnt = 0;
		string h;
		for (int i = 0; i < ss.size(); i++)
			if (ss[i] == ' ')
			{
				if (c&&h!="")
				{
					cnt++;
					if (cnt == 1)
						s = h;
					else if (cnt == 2)
						a = stoi(h);
					else
						b = stoi(h);
					h = "";
				}
			}
			else
			{
				h += ss[i];
				c = true;
			}
		if (h != "")
			b = stoi(h);

		ll k = Basetoten(s, a);
		string ans = Tentobase(k, b);
		if (ans.size() > 7)
			cout << "  ERROR" << endl;
		else
		{
			int kk = 7 - ans.size();
			for (int i = 0; i < kk; i++)
				cout << " ";
			cout << ans << endl;
		}
	}
}