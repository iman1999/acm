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
	int lt, ct, sp = 0, ls = 0;
	double dis = 0;
	lt = -1;
	while (getline(cin, s))
	{
		ct = 0;
		string h;
		bool c = false;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
			if (s[i] == ' ')
			{
				c = true;
				if (h != "")
					ct += stoi(h);
				h = "";
			}
			else if (s[i] == ':')
			{
				if (cnt == 0)
					ct += stoi(h) * 3600;
				else
					ct += stoi(h) * 60;
				cnt++;
				h = "";
			}
			else
				h += s[i];
		if (!c)
			ct += stoi(h);
		else
			sp = stoi(h);
		if (lt != -1)
			dis += (double)ls*((ct - lt) / 3600.0);
		if (!c)
			cout << s << " " << setprecision(2) << fixed << dis << " km\n";
		lt = ct;
		if (c)
			ls = sp;
	}
}